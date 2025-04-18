// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/receive_serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_ReceiveSerial_is_rune
{
public:
  explicit Init_ReceiveSerial_is_rune(::rm_msgs::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::ReceiveSerial is_rune(::rm_msgs::msg::ReceiveSerial::_is_rune_type arg)
  {
    msg_.is_rune = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_serial_time
{
public:
  explicit Init_ReceiveSerial_serial_time(::rm_msgs::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_is_rune serial_time(::rm_msgs::msg::ReceiveSerial::_serial_time_type arg)
  {
    msg_.serial_time = std::move(arg);
    return Init_ReceiveSerial_is_rune(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_motor_speed
{
public:
  explicit Init_ReceiveSerial_motor_speed(::rm_msgs::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_serial_time motor_speed(::rm_msgs::msg::ReceiveSerial::_motor_speed_type arg)
  {
    msg_.motor_speed = std::move(arg);
    return Init_ReceiveSerial_serial_time(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_v0
{
public:
  explicit Init_ReceiveSerial_v0(::rm_msgs::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_motor_speed v0(::rm_msgs::msg::ReceiveSerial::_v0_type arg)
  {
    msg_.v0 = std::move(arg);
    return Init_ReceiveSerial_motor_speed(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_pitch
{
public:
  explicit Init_ReceiveSerial_pitch(::rm_msgs::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_v0 pitch(::rm_msgs::msg::ReceiveSerial::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ReceiveSerial_v0(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_yaw
{
public:
  explicit Init_ReceiveSerial_yaw(::rm_msgs::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_pitch yaw(::rm_msgs::msg::ReceiveSerial::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ReceiveSerial_pitch(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_header
{
public:
  Init_ReceiveSerial_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReceiveSerial_yaw header(::rm_msgs::msg::ReceiveSerial::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReceiveSerial_yaw(msg_);
  }

private:
  ::rm_msgs::msg::ReceiveSerial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::ReceiveSerial>()
{
  return rm_msgs::msg::builder::Init_ReceiveSerial_header();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__BUILDER_HPP_
