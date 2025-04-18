// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/AssistData.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__ASSIST_DATA__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__ASSIST_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/assist_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AssistData & msg,
  std::ostream & out)
{
  out << "{";
  // member: rel_x
  {
    out << "rel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_x, out);
    out << ", ";
  }

  // member: rel_y
  {
    out << "rel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_y, out);
    out << ", ";
  }

  // member: rel_z
  {
    out << "rel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_z, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssistData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_x, out);
    out << "\n";
  }

  // member: rel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_y, out);
    out << "\n";
  }

  // member: rel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_z, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssistData & msg, bool use_flow_style = false)
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
  const rm_msgs::msg::AssistData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::AssistData & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::AssistData>()
{
  return "rm_msgs::msg::AssistData";
}

template<>
inline const char * name<rm_msgs::msg::AssistData>()
{
  return "rm_msgs/msg/AssistData";
}

template<>
struct has_fixed_size<rm_msgs::msg::AssistData>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rm_msgs::msg::AssistData>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rm_msgs::msg::AssistData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__ASSIST_DATA__TRAITS_HPP_
