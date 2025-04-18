// #pragma once
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <yaml-cpp/yaml.h>
#include "rm_msgs/msg/assist_data.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>

namespace rm_assist {

class AssistNode : public rclcpp::Node {
public:
    explicit AssistNode(const rclcpp::NodeOptions &options);

private:
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    rclcpp::Publisher<rm_msgs::msg::AssistData>::SharedPtr assist_pub_;
    geometry_msgs::msg::PoseStamped rm_map_pos_;
    geometry_msgs::msg::PoseStamped outpost_pos_;
    rclcpp::TimerBase::SharedPtr timer_;

    void updateRobotPose();
    void loadOutpostPosition();
    void calculateRelativePosition();
    void publishRelativeTransform();
    void publishAssistData();
};

} // namespace rm_assist













// class AssistNode:public rclcpp::Node
// {
// public:

// }





// rm_msg::msg::Outpost outpost_msg //前哨站在世界坐标系下的坐标
// geometry_msgs::msg::TransformStamped transform_stamped//odom相对于livox_frame的tf2变化

// struct result
// {
//     float x;   
//     float y;
//     float z;
//     float yaw;
//     float pitch;
//     float distance;
// };

//   // parameters  
//     //------------------
//     float v0; // m/s
//     float angle_pitch;
//     float angle_yaw;
//     float distance;
//     float fly_t; // m
//     //------------------
//     float now_pitch;
//     float now_yaw;
//     //------------------
//     //------------------
//     int armor_num;
//     // 敌方前哨站在我odom坐标系下的坐标
//     float yaw;
//     float v_yaw;
//     float armor_ros_x;
//     float car_ros_x;
//     float armor_vx;
//     float car_vx;
//     float armor_ros_y;
//     float car_ros_y;
//     float armor_vy;
//     float car_vy;
//     float armor_ros_z;
//     float armor_vz;
//     float r_1;
//     float r_2;
//     float dz;
//     bool is_tracking;
//     bool is_can_hit;
//     string id;
//     rclcpp::Time armor_time;

// // outpost_msg.output_pose.x=
// // outpost_msg.output_pose.y=
// // outpost_msg.output_pose.z=
// // outpost_msg.output_pose.orientation.x=
// // outpost_msg.output_pose.orientation.y=
// // outpost_msg.output_pose.orientation.z=



