
cmds=(  "ros2 launch rm_bringup bringup.launch.py"
	"ros2 launch livox_ros_driver2 msg_MID360_launch.py"
	"ros2 launch linefit_ground_segmentation_ros segmentation.launch.py" 
	 "ros2 launch fast_lio mapping.launch.py"
	#"ros2 launch point_lio mapping_mid360.launch.py"
	#"ros2 launch imu_complementary_filter complementary_filter.launch.py"
	"ros2 launch pointcloud_to_laserscan pointcloud_to_laserscan_launch.py"
	"ros2 launch icp_registration icp.launch.py"
	"sleep 2 && ros2 launch rm_navigation bringup_launch.py"
	"ros2 run rm_decision without_decision_node"
	# "ros2 run rm_decision rm_decision_node")
	)

for cmd in "${cmds[@]}";
do
	echo Current CMD : "$cmd"
	gnome-terminal -- bash -c "cd $(pwd);source install/setup.bash;$cmd;exec bash;"
	sleep 0.2
done
