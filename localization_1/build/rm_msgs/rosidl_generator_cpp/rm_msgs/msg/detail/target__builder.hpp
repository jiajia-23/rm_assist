// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_Target_is_repeat
{
public:
  explicit Init_Target_is_repeat(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::Target is_repeat(::rm_msgs::msg::Target::_is_repeat_type arg)
  {
    msg_.is_repeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_c_to_a_pitch
{
public:
  explicit Init_Target_c_to_a_pitch(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_is_repeat c_to_a_pitch(::rm_msgs::msg::Target::_c_to_a_pitch_type arg)
  {
    msg_.c_to_a_pitch = std::move(arg);
    return Init_Target_is_repeat(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_dz
{
public:
  explicit Init_Target_dz(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_c_to_a_pitch dz(::rm_msgs::msg::Target::_dz_type arg)
  {
    msg_.dz = std::move(arg);
    return Init_Target_c_to_a_pitch(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_radius_2
{
public:
  explicit Init_Target_radius_2(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_dz radius_2(::rm_msgs::msg::Target::_radius_2_type arg)
  {
    msg_.radius_2 = std::move(arg);
    return Init_Target_dz(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_radius_1
{
public:
  explicit Init_Target_radius_1(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_radius_2 radius_1(::rm_msgs::msg::Target::_radius_1_type arg)
  {
    msg_.radius_1 = std::move(arg);
    return Init_Target_radius_2(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_v_yaw
{
public:
  explicit Init_Target_v_yaw(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_radius_1 v_yaw(::rm_msgs::msg::Target::_v_yaw_type arg)
  {
    msg_.v_yaw = std::move(arg);
    return Init_Target_radius_1(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_yaw
{
public:
  explicit Init_Target_yaw(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_v_yaw yaw(::rm_msgs::msg::Target::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Target_v_yaw(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_car_velocity
{
public:
  explicit Init_Target_car_velocity(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_yaw car_velocity(::rm_msgs::msg::Target::_car_velocity_type arg)
  {
    msg_.car_velocity = std::move(arg);
    return Init_Target_yaw(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_armor_velocity
{
public:
  explicit Init_Target_armor_velocity(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_car_velocity armor_velocity(::rm_msgs::msg::Target::_armor_velocity_type arg)
  {
    msg_.armor_velocity = std::move(arg);
    return Init_Target_car_velocity(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_car_position
{
public:
  explicit Init_Target_car_position(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_armor_velocity car_position(::rm_msgs::msg::Target::_car_position_type arg)
  {
    msg_.car_position = std::move(arg);
    return Init_Target_armor_velocity(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_armor_position
{
public:
  explicit Init_Target_armor_position(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_car_position armor_position(::rm_msgs::msg::Target::_armor_position_type arg)
  {
    msg_.armor_position = std::move(arg);
    return Init_Target_car_position(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_armor_num
{
public:
  explicit Init_Target_armor_num(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_armor_position armor_num(::rm_msgs::msg::Target::_armor_num_type arg)
  {
    msg_.armor_num = std::move(arg);
    return Init_Target_armor_position(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_id
{
public:
  explicit Init_Target_id(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_armor_num id(::rm_msgs::msg::Target::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Target_armor_num(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_tracking
{
public:
  explicit Init_Target_tracking(::rm_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_id tracking(::rm_msgs::msg::Target::_tracking_type arg)
  {
    msg_.tracking = std::move(arg);
    return Init_Target_id(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

class Init_Target_header
{
public:
  Init_Target_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_tracking header(::rm_msgs::msg::Target::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Target_tracking(msg_);
  }

private:
  ::rm_msgs::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::Target>()
{
  return rm_msgs::msg::builder::Init_Target_header();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
