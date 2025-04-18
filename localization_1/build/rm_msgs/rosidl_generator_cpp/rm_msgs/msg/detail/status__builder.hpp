// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define RM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_is_rune
{
public:
  Init_Status_is_rune()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_msgs::msg::Status is_rune(::rm_msgs::msg::Status::_is_rune_type arg)
  {
    msg_.is_rune = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_msgs::msg::Status>()
{
  return rm_msgs::msg::builder::Init_Status_is_rune();
}

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
