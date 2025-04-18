// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/SendSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__SEND_SERIAL__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__SEND_SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/send_serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_SendSerial_distance
{
public:
  explicit Init_SendSerial_distance(::rm_msgs::msg::SendSerial & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::SendSerial distance(::rm_msgs::msg::SendSerial::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::SendSerial msg_;
};

class Init_SendSerial_pitch
{
public:
  explicit Init_SendSerial_pitch(::rm_msgs::msg::SendSerial & msg)
  : msg_(msg)
  {}
  Init_SendSerial_distance pitch(::rm_msgs::msg::SendSerial::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SendSerial_distance(msg_);
  }

private:
  ::rm_msgs::msg::SendSerial msg_;
};

class Init_SendSerial_yaw
{
public:
  explicit Init_SendSerial_yaw(::rm_msgs::msg::SendSerial & msg)
  : msg_(msg)
  {}
  Init_SendSerial_pitch yaw(::rm_msgs::msg::SendSerial::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SendSerial_pitch(msg_);
  }

private:
  ::rm_msgs::msg::SendSerial msg_;
};

class Init_SendSerial_is_can_hit
{
public:
  explicit Init_SendSerial_is_can_hit(::rm_msgs::msg::SendSerial & msg)
  : msg_(msg)
  {}
  Init_SendSerial_yaw is_can_hit(::rm_msgs::msg::SendSerial::_is_can_hit_type arg)
  {
    msg_.is_can_hit = std::move(arg);
    return Init_SendSerial_yaw(msg_);
  }

private:
  ::rm_msgs::msg::SendSerial msg_;
};

class Init_SendSerial_is_tracking
{
public:
  explicit Init_SendSerial_is_tracking(::rm_msgs::msg::SendSerial & msg)
  : msg_(msg)
  {}
  Init_SendSerial_is_can_hit is_tracking(::rm_msgs::msg::SendSerial::_is_tracking_type arg)
  {
    msg_.is_tracking = std::move(arg);
    return Init_SendSerial_is_can_hit(msg_);
  }

private:
  ::rm_msgs::msg::SendSerial msg_;
};

class Init_SendSerial_header
{
public:
  Init_SendSerial_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendSerial_is_tracking header(::rm_msgs::msg::SendSerial::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SendSerial_is_tracking(msg_);
  }

private:
  ::rm_msgs::msg::SendSerial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::SendSerial>()
{
  return rm_msgs::msg::builder::Init_SendSerial_header();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__SEND_SERIAL__BUILDER_HPP_
