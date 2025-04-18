// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/ClosedLoop.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__CLOSED_LOOP__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__CLOSED_LOOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/closed_loop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_ClosedLoop_fly_t
{
public:
  explicit Init_ClosedLoop_fly_t(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::ClosedLoop fly_t(::rm_msgs::msg::ClosedLoop::_fly_t_type arg)
  {
    msg_.fly_t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_theta
{
public:
  explicit Init_ClosedLoop_theta(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_fly_t theta(::rm_msgs::msg::ClosedLoop::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_ClosedLoop_fly_t(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_v0
{
public:
  explicit Init_ClosedLoop_v0(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_theta v0(::rm_msgs::msg::ClosedLoop::_v0_type arg)
  {
    msg_.v0 = std::move(arg);
    return Init_ClosedLoop_theta(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_now_armor_pose
{
public:
  explicit Init_ClosedLoop_now_armor_pose(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_v0 now_armor_pose(::rm_msgs::msg::ClosedLoop::_now_armor_pose_type arg)
  {
    msg_.now_armor_pose = std::move(arg);
    return Init_ClosedLoop_v0(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_pred_pose
{
public:
  explicit Init_ClosedLoop_pred_pose(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_now_armor_pose pred_pose(::rm_msgs::msg::ClosedLoop::_pred_pose_type arg)
  {
    msg_.pred_pose = std::move(arg);
    return Init_ClosedLoop_now_armor_pose(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_now_pose
{
public:
  explicit Init_ClosedLoop_now_pose(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_pred_pose now_pose(::rm_msgs::msg::ClosedLoop::_now_pose_type arg)
  {
    msg_.now_pose = std::move(arg);
    return Init_ClosedLoop_pred_pose(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_c_to_a_pitch
{
public:
  explicit Init_ClosedLoop_c_to_a_pitch(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_now_pose c_to_a_pitch(::rm_msgs::msg::ClosedLoop::_c_to_a_pitch_type arg)
  {
    msg_.c_to_a_pitch = std::move(arg);
    return Init_ClosedLoop_now_pose(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_yaw
{
public:
  explicit Init_ClosedLoop_yaw(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_c_to_a_pitch yaw(::rm_msgs::msg::ClosedLoop::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ClosedLoop_c_to_a_pitch(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_dz
{
public:
  explicit Init_ClosedLoop_dz(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_yaw dz(::rm_msgs::msg::ClosedLoop::_dz_type arg)
  {
    msg_.dz = std::move(arg);
    return Init_ClosedLoop_yaw(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_another_r
{
public:
  explicit Init_ClosedLoop_another_r(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_dz another_r(::rm_msgs::msg::ClosedLoop::_another_r_type arg)
  {
    msg_.another_r = std::move(arg);
    return Init_ClosedLoop_dz(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_r
{
public:
  explicit Init_ClosedLoop_r(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_another_r r(::rm_msgs::msg::ClosedLoop::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ClosedLoop_another_r(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_armor_num
{
public:
  explicit Init_ClosedLoop_armor_num(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_r armor_num(::rm_msgs::msg::ClosedLoop::_armor_num_type arg)
  {
    msg_.armor_num = std::move(arg);
    return Init_ClosedLoop_r(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_id
{
public:
  explicit Init_ClosedLoop_id(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_armor_num id(::rm_msgs::msg::ClosedLoop::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ClosedLoop_armor_num(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_shoot_header
{
public:
  explicit Init_ClosedLoop_shoot_header(::rm_msgs::msg::ClosedLoop & msg)
  : msg_(msg)
  {}
  Init_ClosedLoop_id shoot_header(::rm_msgs::msg::ClosedLoop::_shoot_header_type arg)
  {
    msg_.shoot_header = std::move(arg);
    return Init_ClosedLoop_id(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

class Init_ClosedLoop_image_header
{
public:
  Init_ClosedLoop_image_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClosedLoop_shoot_header image_header(::rm_msgs::msg::ClosedLoop::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_ClosedLoop_shoot_header(msg_);
  }

private:
  ::rm_msgs::msg::ClosedLoop msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::ClosedLoop>()
{
  return rm_msgs::msg::builder::Init_ClosedLoop_image_header();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__CLOSED_LOOP__BUILDER_HPP_
