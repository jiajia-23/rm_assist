#include"rm_aimassist/assist_node.hpp"




namespace rm_assist {



AssistNode::AssistNode(const rclcpp::NodeOptions &options)
    : Node("rm_assist_node", options) {
    RCLCPP_INFO(this->get_logger(), "Starting Assistnode!");
    tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
    assist_pub_ = this->create_publisher<rm_msgs::msg::AssistData>("assist/data", 10);
 
    loadOutpostPosition( );
    timer_ = this->create_wall_timer(
        std::chrono::milliseconds(100),
        std::bind(&AssistNode::updateRobotPose, this));
}

// 其他函数实现保持不变（注意修正拼写和类型问题）
// namespace rm_assist

void AssistNode::updateRobotPose()
{
    try {
        // 获取 map 到 odom 的变换
        auto transform = tf_buffer_->lookupTransform("map", "odom", rclcpp::Time(0));
        
        // 更新机器人位姿
        rm_map_pos_.header = transform.header;
        rm_map_pos_.pose.position.x = transform.transform.translation.x;
        rm_map_pos_.pose.position.y = transform.transform.translation.y;
        rm_map_pos_.pose.position.z = transform.transform.translation.z;
        rm_map_pos_.pose.orientation = transform.transform.rotation;

        // 计算机器人到前哨站的相对位置
        calculateRelativePosition();

        // 发布相对位置到 TF2
        publishRelativeTransform();

        // 发布辅助数据
        publishAssistData();
    } catch (tf2::TransformException &ex) {
        RCLCPP_WARN(this->get_logger(), "TF2 异常: %s", ex.what());
    }
}

void AssistNode::loadOutpostPosition( )
{
                // 声明参数（带默认值）
        this->declare_parameter("outpost.x", 0.0);  // 注意是 outpost.x 不是 outpost_x
        this->declare_parameter("outpost.y", 0.0);
        this->declare_parameter("outpost.z", 0.0);
        this->declare_parameter("outpost.qx", 0.0);
        this->declare_parameter("outpost.qy", 0.0);
        this->declare_parameter("outpost.qz", 0.0);
        this->declare_parameter("outpost.qw", 1.0);

        // 获取参数
        outpost_pos_.pose.position.x = this->get_parameter("outpost.x").as_double();
        outpost_pos_.pose.position.y = this->get_parameter("outpost.y").as_double();
        outpost_pos_.pose.position.z = this->get_parameter("outpost.z").as_double();
        outpost_pos_.pose.orientation.x = this->get_parameter("outpost.qx").as_double();
        outpost_pos_.pose.orientation.y  = this->get_parameter("outpost.qy").as_double();
        outpost_pos_.pose.orientation.z = this->get_parameter("outpost.qz").as_double();
        outpost_pos_.pose.orientation.w = this->get_parameter("outpost.qw").as_double();

        RCLCPP_INFO(this->get_logger(), "成功加载前哨站位姿");

}

void AssistNode::calculateRelativePosition()
{
    // 计算机器人到前哨站的相对位置
    tf2::Transform robot_tf, outpost_tf, relative_tf;
    tf2::fromMsg(rm_map_pos_.pose, robot_tf);
    tf2::fromMsg(outpost_pos_.pose, outpost_tf);
    relative_tf = outpost_tf.inverse() * robot_tf;

     tf2::Transform outpost_relative_to_robot = relative_tf.inverse();

    // 存储相对位置
    geometry_msgs::msg::TransformStamped relative_transform;
    relative_transform.transform = tf2::toMsg(relative_tf);
    relative_transform.header.stamp = this->now();
    relative_transform.header.frame_id = "robot";
    relative_transform.child_frame_id = "outpost";
    tf_broadcaster_->sendTransform(relative_transform);
    
}

void AssistNode::publishAssistData()
{
    tf2::Transform relative_tf;
    // 获取前哨站相对于机器人的位姿
    tf2::Transform outpost_relative_to_robot = relative_tf.inverse();

    // 提取平移和旋转
    auto position = outpost_relative_to_robot.getOrigin();
    auto rotation = outpost_relative_to_robot.getRotation();

    // 发布为自定义消息
    rm_msgs::msg::AssistData msg;
    msg.rel_x = position.x();
    msg.rel_y = position.y();
    msg.rel_z = position.z();
    
    // 如果需要旋转（四元数转欧拉角）
    // tf2::Matrix3x3 m(rotation);
    // double roll, pitch, yaw;
    // m.getRPY(roll, pitch, yaw);
    // msg.roll = roll;
    // msg.pitch = pitch;
    // msg.yaw = yaw;

    assist_pub_->publish(msg);
}

    // 计算机器人到前哨站的距离
    // double dx = rm_map_pos_.pose.position.x - outpost_pos_.pose.position.x;
    // double dy = rm_map_pos_.pose.position.y - outpost_pos_.pose.position.y;
    // double dz = rm_map_pos_.pose.position.z - outpost_pos_.pose.position.z;
    // double distance = std::sqrt(dx * dx + dy * dy + dz * dz);

    // 发布辅助数据
    // rm_msgs::msg::AssistData assist_msg;
    // assist_msg.distance = distance;
    // assist_pub_->publish(assist_msg);
}

 //namespace rm_assist

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(rm_assist::AssistNode)






















// AssistNode::AssistNode(const rclcpp::NodeOptions & options) : Node("rm_assist_node", options)
// {

// }


















// class TFListener : public rclcpp::Node
// {
// public:
//     TFListener()
//         : Node("tf_listener"), tf_buffer_(this->get_clock()), tf_listener_(tf_buffer_)
//     {
//         // 创建一个定时器，定期查询 TF 数据
//         timer_ = this->create_wall_timer(
//             std::chrono::milliseconds(100),  // 100ms 查询一次
//             std::bind(&TFListener::timer_callback, this));
//     }

// private:
//     void timer_callback()
//     {
//         try {
//             // 查询 map 到 odom 的变换
//             geometry_msgs::msg::TransformStamped transform_stamped = tf_buffer_.lookupTransform(
//                 "map",  // 目标坐标系
//                 "odom", // 源坐标系
//                 tf2::TimePointZero); // 时间点（0 表示最新的变换）

//             // 提取位置
//             double x = transform_stamped.transform.translation.x;
//             double y = transform_stamped.transform.translation.y;
//             double z = transform_stamped.transform.translation.z;

//             // 提取姿态（四元数）
//             tf2::Quaternion q(
//                 transform_stamped.transform.rotation.x,
//                 transform_stamped.transform.rotation.y,
//                 transform_stamped.transform.rotation.z,
//                 transform_stamped.transform.rotation.w);

//             // 将四元数转换为欧拉角（可选）
//             tf2::Matrix3x3 m(q);
//             double roll, pitch, yaw;
//             m.getRPY(roll, pitch, yaw);

//             // 打印位置和姿态
//             RCLCPP_INFO(this->get_logger(), "Position: [x: %f, y: %f, z: %f]", x, y, z);
//             RCLCPP_INFO(this->get_logger(), "Orientation (Quaternion): [x: %f, y: %f, z: %f, w: %f]",
//                         q.x(), q.y(), q.z(), q.w());
//             RCLCPP_INFO(this->get_logger(), "Orientation (RPY): [roll: %f, pitch: %f, yaw: %f]",
//                         roll, pitch, yaw);
//         }
//         catch (tf2::TransformException &ex) {
//             // 如果查询失败，打印错误信息
//             RCLCPP_ERROR(this->get_logger(), "Failed to get transform: %s", ex.what());
//         }
//     }

//     // TF 缓冲区和监听器
//     tf2_ros::Buffer tf_buffer_;
//     tf2_ros::TransformListener tf_listener_;

//     // 定时器
//     rclcpp::TimerBase::SharedPtr timer_;
// };








// int main(int argc, char **argv)
// {
//     rclcpp::init(argc, argv);
//     rclcpp::spin(std::make_shared<TFListener>());
//     rclcpp::shutdown();
//     return 0;
// }