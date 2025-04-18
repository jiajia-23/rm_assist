import os

from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from launch.actions import TimerAction, Shutdown


def generate_launch_description():
    config= os.path.join(
    get_package_share_directory('rm_aimassist'), 'config', 'outpost.yaml')
    # 在launch文件中打印路径确认
    print(f"Config path: {config}")
   
    container = ComposableNodeContainer(
        name='aimassist_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='rm_aimassist',
                plugin='rm_assist::AssistNode',
                name='rm_assist_node',
                parameters=[config]
            )
        ],
        output='screen',
    )
    return LaunchDescription([container])