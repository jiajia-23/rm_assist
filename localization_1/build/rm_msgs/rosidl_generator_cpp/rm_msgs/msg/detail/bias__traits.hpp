// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__BIAS__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__BIAS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/bias__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bias & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: need_t
  {
    out << "need_t: ";
    rosidl_generator_traits::value_to_yaml(msg.need_t, out);
    out << ", ";
  }

  // member: fly_t
  {
    out << "fly_t: ";
    rosidl_generator_traits::value_to_yaml(msg.fly_t, out);
    out << ", ";
  }

  // member: serial_bias_time
  {
    out << "serial_bias_time: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_bias_time, out);
    out << ", ";
  }

  // member: latency_bias_time
  {
    out << "latency_bias_time: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_bias_time, out);
    out << ", ";
  }

  // member: motor_bias_time
  {
    out << "motor_bias_time: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bias_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bias & msg,
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

  // member: need_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "need_t: ";
    rosidl_generator_traits::value_to_yaml(msg.need_t, out);
    out << "\n";
  }

  // member: fly_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fly_t: ";
    rosidl_generator_traits::value_to_yaml(msg.fly_t, out);
    out << "\n";
  }

  // member: serial_bias_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_bias_time: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_bias_time, out);
    out << "\n";
  }

  // member: latency_bias_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_bias_time: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_bias_time, out);
    out << "\n";
  }

  // member: motor_bias_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_bias_time: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bias_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bias & msg, bool use_flow_style = false)
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
  const rm_msgs::msg::Bias & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::Bias & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::Bias>()
{
  return "rm_msgs::msg::Bias";
}

template<>
inline const char * name<rm_msgs::msg::Bias>()
{
  return "rm_msgs/msg/Bias";
}

template<>
struct has_fixed_size<rm_msgs::msg::Bias>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_msgs::msg::Bias>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_msgs::msg::Bias>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__BIAS__TRAITS_HPP_
