// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/receive_serial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReceiveSerial & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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

  // member: v0
  {
    out << "v0: ";
    rosidl_generator_traits::value_to_yaml(msg.v0, out);
    out << ", ";
  }

  // member: motor_speed
  {
    out << "motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_speed, out);
    out << ", ";
  }

  // member: serial_time
  {
    out << "serial_time: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_time, out);
    out << ", ";
  }

  // member: is_rune
  {
    out << "is_rune: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rune, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReceiveSerial & msg,
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

  // member: v0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v0: ";
    rosidl_generator_traits::value_to_yaml(msg.v0, out);
    out << "\n";
  }

  // member: motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_speed, out);
    out << "\n";
  }

  // member: serial_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_time: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_time, out);
    out << "\n";
  }

  // member: is_rune
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_rune: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rune, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReceiveSerial & msg, bool use_flow_style = false)
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
  const rm_msgs::msg::ReceiveSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::ReceiveSerial & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::ReceiveSerial>()
{
  return "rm_msgs::msg::ReceiveSerial";
}

template<>
inline const char * name<rm_msgs::msg::ReceiveSerial>()
{
  return "rm_msgs/msg/ReceiveSerial";
}

template<>
struct has_fixed_size<rm_msgs::msg::ReceiveSerial>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_msgs::msg::ReceiveSerial>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_msgs::msg::ReceiveSerial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__TRAITS_HPP_
