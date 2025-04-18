// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'armor_position'
// Member 'car_position'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'armor_velocity'
// Member 'car_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__Target __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__Target __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Target_
{
  using Type = Target_<ContainerAllocator>;

  explicit Target_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    armor_position(_init),
    car_position(_init),
    armor_velocity(_init),
    car_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking = false;
      this->id = "";
      this->armor_num = 0l;
      this->yaw = 0.0;
      this->v_yaw = 0.0;
      this->radius_1 = 0.0;
      this->radius_2 = 0.0;
      this->dz = 0.0;
      this->c_to_a_pitch = 0.0;
      this->is_repeat = false;
    }
  }

  explicit Target_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    armor_position(_alloc, _init),
    car_position(_alloc, _init),
    armor_velocity(_alloc, _init),
    car_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking = false;
      this->id = "";
      this->armor_num = 0l;
      this->yaw = 0.0;
      this->v_yaw = 0.0;
      this->radius_1 = 0.0;
      this->radius_2 = 0.0;
      this->dz = 0.0;
      this->c_to_a_pitch = 0.0;
      this->is_repeat = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracking_type =
    bool;
  _tracking_type tracking;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _armor_num_type =
    int32_t;
  _armor_num_type armor_num;
  using _armor_position_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _armor_position_type armor_position;
  using _car_position_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _car_position_type car_position;
  using _armor_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _armor_velocity_type armor_velocity;
  using _car_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _car_velocity_type car_velocity;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _v_yaw_type =
    double;
  _v_yaw_type v_yaw;
  using _radius_1_type =
    double;
  _radius_1_type radius_1;
  using _radius_2_type =
    double;
  _radius_2_type radius_2;
  using _dz_type =
    double;
  _dz_type dz;
  using _c_to_a_pitch_type =
    double;
  _c_to_a_pitch_type c_to_a_pitch;
  using _is_repeat_type =
    bool;
  _is_repeat_type is_repeat;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracking(
    const bool & _arg)
  {
    this->tracking = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__armor_num(
    const int32_t & _arg)
  {
    this->armor_num = _arg;
    return *this;
  }
  Type & set__armor_position(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->armor_position = _arg;
    return *this;
  }
  Type & set__car_position(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->car_position = _arg;
    return *this;
  }
  Type & set__armor_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->armor_velocity = _arg;
    return *this;
  }
  Type & set__car_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->car_velocity = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__v_yaw(
    const double & _arg)
  {
    this->v_yaw = _arg;
    return *this;
  }
  Type & set__radius_1(
    const double & _arg)
  {
    this->radius_1 = _arg;
    return *this;
  }
  Type & set__radius_2(
    const double & _arg)
  {
    this->radius_2 = _arg;
    return *this;
  }
  Type & set__dz(
    const double & _arg)
  {
    this->dz = _arg;
    return *this;
  }
  Type & set__c_to_a_pitch(
    const double & _arg)
  {
    this->c_to_a_pitch = _arg;
    return *this;
  }
  Type & set__is_repeat(
    const bool & _arg)
  {
    this->is_repeat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::Target_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::Target_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::Target_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::Target_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::Target_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::Target_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::Target_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::Target_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::Target_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::Target_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__Target
    std::shared_ptr<rm_msgs::msg::Target_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__Target
    std::shared_ptr<rm_msgs::msg::Target_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Target_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracking != other.tracking) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->armor_num != other.armor_num) {
      return false;
    }
    if (this->armor_position != other.armor_position) {
      return false;
    }
    if (this->car_position != other.car_position) {
      return false;
    }
    if (this->armor_velocity != other.armor_velocity) {
      return false;
    }
    if (this->car_velocity != other.car_velocity) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->v_yaw != other.v_yaw) {
      return false;
    }
    if (this->radius_1 != other.radius_1) {
      return false;
    }
    if (this->radius_2 != other.radius_2) {
      return false;
    }
    if (this->dz != other.dz) {
      return false;
    }
    if (this->c_to_a_pitch != other.c_to_a_pitch) {
      return false;
    }
    if (this->is_repeat != other.is_repeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const Target_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Target_

// alias to use template instance with default allocator
using Target =
  rm_msgs::msg::Target_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_
