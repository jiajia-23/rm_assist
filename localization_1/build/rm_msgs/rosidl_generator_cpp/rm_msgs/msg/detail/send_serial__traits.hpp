// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/SendSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__SEND_SERIAL__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__SEND_SERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/send_serial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SendSerial & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: is_tracking
  {
    out << "is_tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tracking, out);
    out << ", ";
  }

  // member: is_can_hit
  {
    out << "is_can_hit: ";
    rosidl_generator_traits::value_to_yaml(msg.is_can_hit, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: is_tracking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tracking, out);
    out << "\n";
  }

  // member: is_can_hit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_can_hit: ";
    rosidl_generator_traits::value_to_yaml(msg.is_can_hit, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendSerial & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_msgs::msg::SendSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::SendSerial & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::SendSerial>()
{
  return "rm_msgs::msg::SendSerial";
}

template<>
inline const char * name<rm_msgs::msg::SendSerial>()
{
  return "rm_msgs/msg/SendSerial";
}

template<>
struct has_fixed_size<rm_msgs::msg::SendSerial>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_msgs::msg::SendSerial>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_msgs::msg::SendSerial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__SEND_SERIAL__TRAITS_HPP_
