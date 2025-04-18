#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <fstream>
#include <yaml-cpp/yaml.h>

class Founder : public rclcpp::Node
{
public:
    Founder() : Node("founder")
    {
        // 读取YAML文件中的参数
        load_parameters();

        // 创建定时器，每秒触发一次
        publisher_ = this->create_publisher<std_msgs::msg::String>("parameters", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&Founder::publish_parameters, this));
    }

private:
    void load_parameters()
    {
        YAML::Node config = YAML::LoadFile("config.yaml");
        vx_ = config["vx"].as<int>();
        vy_ = config["vy"].as<int>();
        vz_ = config["vz"].as<int>();
        ekf_xyz_ = config["ekf"]["xyz"].as<float>();
        ekf_yaw_ = config["ekf"]["yaw"].as<float>();
        ekf_r_ = config["ekf"]["r"].as<float>();
    }

    void publish_parameters()
    {
        std_msgs::msg::String msg;
        msg.data = std::to_string(ekf_xyz_) + ", " +
                    std::to_string(ekf_yaw_) + ", " +
                    std::to_string(ekf_r_) + ", " +
                    std::to_string(vx_) + ", " +
                    std::to_string(vy_) + ", " +
                    std::to_string(vz_);
        RCLCPP_INFO(this->get_logger(), "Publishing parameters: [%s]", msg.data.c_str());
        publisher_->publish(msg);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    int vx_, vy_, vz_;
    float ekf_xyz_, ekf_yaw_, ekf_r_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Founder>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
