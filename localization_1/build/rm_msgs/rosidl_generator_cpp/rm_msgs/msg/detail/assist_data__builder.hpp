// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/AssistData.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__ASSIST_DATA__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__ASSIST_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/assist_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_AssistData_stamp
{
public:
  explicit Init_AssistData_stamp(::rm_msgs::msg::AssistData & msg)
  : msg_(msg)
  {}
  ::rm_msgs::msg::AssistData stamp(::rm_msgs::msg::AssistData::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::AssistData msg_;
};

class Init_AssistData_rel_z
{
public:
  explicit Init_AssistData_rel_z(::rm_msgs::msg::AssistData & msg)
  : msg_(msg)
  {}
  Init_AssistData_stamp rel_z(::rm_msgs::msg::AssistData::_rel_z_type arg)
  {
    msg_.rel_z = std::move(arg);
    return Init_AssistData_stamp(msg_);
  }

private:
  ::rm_msgs::msg::AssistData msg_;
};

class Init_AssistData_rel_y
{
public:
  explicit Init_AssistData_rel_y(::rm_msgs::msg::AssistData & msg)
  : msg_(msg)
  {}
  Init_AssistData_rel_z rel_y(::rm_msgs::msg::AssistData::_rel_y_type arg)
  {
    msg_.rel_y = std::move(arg);
    return Init_AssistData_rel_z(msg_);
  }

private:
  ::rm_msgs::msg::AssistData msg_;
};

class Init_AssistData_rel_x
{
public:
  Init_AssistData_rel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssistData_rel_y rel_x(::rm_msgs::msg::AssistData::_rel_x_type arg)
  {
    msg_.rel_x = std::move(arg);
    return Init_AssistData_rel_y(msg_);
  }

private:
  ::rm_msgs::msg::AssistData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::AssistData>()
{
  return rm_msgs::msg::builder::Init_AssistData_rel_x();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__ASSIST_DATA__BUILDER_HPP_
