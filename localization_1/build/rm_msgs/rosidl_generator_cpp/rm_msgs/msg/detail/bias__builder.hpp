// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__BIAS__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__BIAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/bias__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_Bias_motor_bias_time
{
public:
  explicit Init_Bias_motor_bias_time(::rm_msgs::msg::Bias & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::Bias motor_bias_time(::rm_msgs::msg::Bias::_motor_bias_time_type arg)
  {
    msg_.motor_bias_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::Bias msg_;
};

class Init_Bias_latency_bias_time
{
public:
  explicit Init_Bias_latency_bias_time(::rm_msgs::msg::Bias & msg)
  : msg_(msg)
  {}
  Init_Bias_motor_bias_time latency_bias_time(::rm_msgs::msg::Bias::_latency_bias_time_type arg)
  {
    msg_.latency_bias_time = std::move(arg);
    return Init_Bias_motor_bias_time(msg_);
  }

private:
  ::rm_msgs::msg::Bias msg_;
};

class Init_Bias_serial_bias_time
{
public:
  explicit Init_Bias_serial_bias_time(::rm_msgs::msg::Bias & msg)
  : msg_(msg)
  {}
  Init_Bias_latency_bias_time serial_bias_time(::rm_msgs::msg::Bias::_serial_bias_time_type arg)
  {
    msg_.serial_bias_time = std::move(arg);
    return Init_Bias_latency_bias_time(msg_);
  }

private:
  ::rm_msgs::msg::Bias msg_;
};

class Init_Bias_fly_t
{
public:
  explicit Init_Bias_fly_t(::rm_msgs::msg::Bias & msg)
  : msg_(msg)
  {}
  Init_Bias_serial_bias_time fly_t(::rm_msgs::msg::Bias::_fly_t_type arg)
  {
    msg_.fly_t = std::move(arg);
    return Init_Bias_serial_bias_time(msg_);
  }

private:
  ::rm_msgs::msg::Bias msg_;
};

class Init_Bias_need_t
{
public:
  explicit Init_Bias_need_t(::rm_msgs::msg::Bias & msg)
  : msg_(msg)
  {}
  Init_Bias_fly_t need_t(::rm_msgs::msg::Bias::_need_t_type arg)
  {
    msg_.need_t = std::move(arg);
    return Init_Bias_fly_t(msg_);
  }

private:
  ::rm_msgs::msg::Bias msg_;
};

class Init_Bias_header
{
public:
  Init_Bias_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bias_need_t header(::rm_msgs::msg::Bias::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Bias_need_t(msg_);
  }

private:
  ::rm_msgs::msg::Bias msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::Bias>()
{
  return rm_msgs::msg::builder::Init_Bias_header();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__BIAS__BUILDER_HPP_
