// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'armor_position'
// Member 'car_position'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'armor_velocity'
// Member 'car_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Target & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tracking
  {
    out << "tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: armor_num
  {
    out << "armor_num: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_num, out);
    out << ", ";
  }

  // member: armor_position
  {
    out << "armor_position: ";
    to_flow_style_yaml(msg.armor_position, out);
    out << ", ";
  }

  // member: car_position
  {
    out << "car_position: ";
    to_flow_style_yaml(msg.car_position, out);
    out << ", ";
  }

  // member: armor_velocity
  {
    out << "armor_velocity: ";
    to_flow_style_yaml(msg.armor_velocity, out);
    out << ", ";
  }

  // member: car_velocity
  {
    out << "car_velocity: ";
    to_flow_style_yaml(msg.car_velocity, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: v_yaw
  {
    out << "v_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.v_yaw, out);
    out << ", ";
  }

  // member: radius_1
  {
    out << "radius_1: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_1, out);
    out << ", ";
  }

  // member: radius_2
  {
    out << "radius_2: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_2, out);
    out << ", ";
  }

  // member: dz
  {
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << ", ";
  }

  // member: c_to_a_pitch
  {
    out << "c_to_a_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.c_to_a_pitch, out);
    out << ", ";
  }

  // member: is_repeat
  {
    out << "is_repeat: ";
    rosidl_generator_traits::value_to_yaml(msg.is_repeat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Target & msg,
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

  // member: tracking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: armor_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_num: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_num, out);
    out << "\n";
  }

  // member: armor_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_position:\n";
    to_block_style_yaml(msg.armor_position, out, indentation + 2);
  }

  // member: car_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_position:\n";
    to_block_style_yaml(msg.car_position, out, indentation + 2);
  }

  // member: armor_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_velocity:\n";
    to_block_style_yaml(msg.armor_velocity, out, indentation + 2);
  }

  // member: car_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_velocity:\n";
    to_block_style_yaml(msg.car_velocity, out, indentation + 2);
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

  // member: v_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.v_yaw, out);
    out << "\n";
  }

  // member: radius_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius_1: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_1, out);
    out << "\n";
  }

  // member: radius_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius_2: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_2, out);
    out << "\n";
  }

  // member: dz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << "\n";
  }

  // member: c_to_a_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_to_a_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.c_to_a_pitch, out);
    out << "\n";
  }

  // member: is_repeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_repeat: ";
    rosidl_generator_traits::value_to_yaml(msg.is_repeat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Target & msg, bool use_flow_style = false)
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
  const rm_msgs::msg::Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::Target & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::Target>()
{
  return "rm_msgs::msg::Target";
}

template<>
inline const char * name<rm_msgs::msg::Target>()
{
  return "rm_msgs/msg/Target";
}

template<>
struct has_fixed_size<rm_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_msgs::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
