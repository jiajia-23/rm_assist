import os
import yaml
from ament_index_python.packages import get_package_share_directory
from launch_ros.descriptions import ComposableNode
from launch_ros.actions import ComposableNodeContainer, Node
from launch.actions import TimerAction, Shutdown
from launch import LaunchDescription
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory

#from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.conditions import IfCondition

#from launch_ros.actions import Node

def generate_launch_description():


 #启动mapping ./mapping
    # package_path = get_package_share_directory('fast_lio')
    # default_config_path = os.path.join(package_path, 'config')
    # default_rviz_config_path = os.path.join(
    #     package_path, 'rviz', 'fastlio.rviz')

    # use_sim_time = LaunchConfiguration('use_sim_time')
    # config_path = LaunchConfiguration('config_path')
    # config_file = LaunchConfiguration('config_file')
    # rviz_use = LaunchConfiguration('rviz')
    # rviz_cfg = LaunchConfiguration('rviz_cfg')

    # declare_use_sim_time_cmd = DeclareLaunchArgument(
    #     'use_sim_time', default_value='false',
    #     description='Use simulation (Gazebo) clock if true'
    # )
    # declare_config_path_cmd = DeclareLaunchArgument(
    #     'config_path', default_value=default_config_path,
    #     description='Yaml config file path'
    # )
    # decalre_config_file_cmd = DeclareLaunchArgument(
    #     'config_file', default_value='mid360.yaml',
    #     description='Config file'
    # )
    # declare_rviz_cmd = DeclareLaunchArgument(
    #     'rviz', default_value='true',
    #     description='Use RViz to monitor results'
    # )
    # declare_rviz_config_path_cmd = DeclareLaunchArgument(
    #     'rviz_cfg', default_value=default_rviz_config_path,
    #     description='RViz config file path'
    # )

    # fast_lio_node = Node(
    #     package='fast_lio',
    #     executable='fastlio_mapping',
    #     parameters=[PathJoinSubstitution([config_path, config_file]),
    #                 {'use_sim_time': use_sim_time}],
    #     output='screen'
    # )
    # rviz_node = Node(
    #     package='rviz2',
    #     executable='rviz2',
    #     arguments=['-d', rviz_cfg],
    #     condition=IfCondition(rviz_use)
    # )

    # ld = LaunchDescription()
    # ld.add_action(declare_use_sim_time_cmd)
    # ld.add_action(declare_config_path_cmd)
    # ld.add_action(decalre_config_file_cmd)
    # #ld.add_action(declare_rviz_cmd)
    # #ld.add_action(declare_rviz_config_path_cmd)

    # ld.add_action(fast_lio_node)
    # ld.add_action(rviz_node)

    #return ld



    # Load parameters
    node_params = os.path.join(get_package_share_directory('rm_startup'), 'config', 'rm_node_parameters.yaml')

    launch_params_path = os.path.join(get_package_share_directory('rm_startup'), 'config', 'rm_launch_parameters.yaml')
    launch_params = yaml.safe_load(open(launch_params_path))

    robot_description = Command(['xacro ', os.path.join(
    get_package_share_directory('rm_gimbal_description'), 'urdf', 'rm_gimbal.urdf.xacro')])

    # 可视化
    # 将机器人的URDF描述转换为实际的机器人状态信息，并以指定的频率发布给其他节点和可视化工具
    robot_state_publisher = Node(
        # ROS标准包，用于发布机器人的状态信息
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description,
                    'publish_frequency': 1000.0}] # 机器人状态发布的频率
    )

    def get_camera_node(package, plugin):
        return ComposableNode(
            package=package,
            plugin=plugin,
            name='camera_node',
            parameters=[node_params],
            extra_arguments=[{'use_intra_process_comms': True}],
        )
    
    #Create camera node
    hik_camera_node = get_camera_node('hik_camera', 'hik_camera::HikCameraNode')
    mv_camera_node = get_camera_node('mindvision_camera', 'mindvision_camera::MVCameraNode')

    if launch_params.get('camera') == 'hik_camera':
        camera_node = hik_camera_node
    elif (launch_params.get('camera') == 'mv_camera'):
        camera_node = mv_camera_node

    detector_node = ComposableNode(
        package='rm_armor_detector',
        plugin='rm_armor_detector::ArmorDetectorNode',
        name='armor_detector',
        parameters=[node_params],
        extra_arguments=[{'use_intra_process_comms': True}],
    )

    rune_node = ComposableNode(
        package='rm_rune',
        plugin='qianli_rm_rune::RuneNode',
        name='rm_rune',
        parameters=[node_params],
        extra_arguments=[{'use_intra_process_comms': True}],
    )

    tracker_node = Node(
        package='rm_armor_tracker',
        executable='rm_armor_tracker_node',
        name='armor_tracker',
        parameters=[node_params],
        output='both',
    )

    serial_driver_node = Node(
        package='rm_serial_driver',
        executable='rm_serial_driver_node',
        name='serial_driver',
        parameters=[node_params],
        output='both',
    )

    mechax_trajectory_node = Node(
        package='mechax_trajectory',
        executable='mechax_trajectory_node',
        name='mechax_trajectory',
        parameters=[node_params],
        output='both',
    )

    closed_loop_node = Node(
        package='closed_loop',
        executable='closed_loop_node',
        name='closed_loop',
        parameters=[node_params],
        output='both',
    )

    container = ComposableNodeContainer(
        name='image_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            camera_node,
            detector_node,
            rune_node,
        ],
        output='both',
    )
    print(container)

    tracker_node_delay = TimerAction(  
        period=3.0,
        actions=[tracker_node],
    )

    serial_driver_node_delay = TimerAction(
        period=3.0,
        actions=[serial_driver_node],
    )

    mechax_trajectory_node_delay = TimerAction(
        period=3.0,
        actions=[mechax_trajectory_node],
    )

    clsoed_loop_node_delay = TimerAction(
        period=3.5,
        actions=[closed_loop_node],
    )

    return LaunchDescription([
        robot_state_publisher,
        container,
        tracker_node_delay,
        serial_driver_node_delay,
        mechax_trajectory_node_delay,
        clsoed_loop_node_delay,
        # declare_use_sim_time_cmd,
        # declare_config_path_cmd,
        
        # fast_lio_node,
        # rviz_node,
    ])