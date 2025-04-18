// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_msgs:msg/ClosedLoop.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__CLOSED_LOOP__TRAITS_HPP_
#define RM_MSGS__MSG__DETAIL__CLOSED_LOOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_msgs/msg/detail/closed_loop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_header'
// Member 'shoot_header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'now_pose'
// Member 'pred_pose'
// Member 'now_armor_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClosedLoop & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_header
  {
    out << "image_header: ";
    to_flow_style_yaml(msg.image_header, out);
    out << ", ";
  }

  // member: shoot_header
  {
    out << "shoot_header: ";
    to_flow_style_yaml(msg.shoot_header, out);
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

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: another_r
  {
    out << "another_r: ";
    rosidl_generator_traits::value_to_yaml(msg.another_r, out);
    out << ", ";
  }

  // member: dz
  {
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: c_to_a_pitch
  {
    out << "c_to_a_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.c_to_a_pitch, out);
    out << ", ";
  }

  // member: now_pose
  {
    out << "now_pose: ";
    to_flow_style_yaml(msg.now_pose, out);
    out << ", ";
  }

  // member: pred_pose
  {
    out << "pred_pose: ";
    to_flow_style_yaml(msg.pred_pose, out);
    out << ", ";
  }

  // member: now_armor_pose
  {
    out << "now_armor_pose: ";
    to_flow_style_yaml(msg.now_armor_pose, out);
    out << ", ";
  }

  // member: v0
  {
    out << "v0: ";
    rosidl_generator_traits::value_to_yaml(msg.v0, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: fly_t
  {
    out << "fly_t: ";
    rosidl_generator_traits::value_to_yaml(msg.fly_t, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClosedLoop & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_header:\n";
    to_block_style_yaml(msg.image_header, out, indentation + 2);
  }

  // member: shoot_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoot_header:\n";
    to_block_style_yaml(msg.shoot_header, out, indentation + 2);
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

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: another_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "another_r: ";
    rosidl_generator_traits::value_to_yaml(msg.another_r, out);
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

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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

  // member: now_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "now_pose:\n";
    to_block_style_yaml(msg.now_pose, out, indentation + 2);
  }

  // member: pred_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pred_pose:\n";
    to_block_style_yaml(msg.pred_pose, out, indentation + 2);
  }

  // member: now_armor_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "now_armor_pose:\n";
    to_block_style_yaml(msg.now_armor_pose, out, indentation + 2);
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

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClosedLoop & msg, bool use_flow_style = false)
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
  const rm_msgs::msg::ClosedLoop & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_msgs::msg::ClosedLoop & msg)
{
  return rm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_msgs::msg::ClosedLoop>()
{
  return "rm_msgs::msg::ClosedLoop";
}

template<>
inline const char * name<rm_msgs::msg::ClosedLoop>()
{
  return "rm_msgs/msg/ClosedLoop";
}

template<>
struct has_fixed_size<rm_msgs::msg::ClosedLoop>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_msgs::msg::ClosedLoop>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_msgs::msg::ClosedLoop>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_MSGS__MSG__DETAIL__CLOSED_LOOP__TRAITS_HPP_
