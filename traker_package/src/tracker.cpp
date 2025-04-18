#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"



class Tracker : public rclcpp::Node
{
public:
    Tracker() : Node("tracker")
    {
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "parameters", 10, std::bind(&Tracker::parameter_callback, this, std::placeholders::_1));
    }

private:
    void parameter_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Received parameters: %s", msg->data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Tracker>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}