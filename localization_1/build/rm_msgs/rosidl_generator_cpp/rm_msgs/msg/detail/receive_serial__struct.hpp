// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__ReceiveSerial __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__ReceiveSerial __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReceiveSerial_
{
  using Type = ReceiveSerial_<ContainerAllocator>;

  explicit ReceiveSerial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->v0 = 0.0;
      this->motor_speed = 0.0;
      this->serial_time = 0.0;
      this->is_rune = false;
    }
  }

  explicit ReceiveSerial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->v0 = 0.0;
      this->motor_speed = 0.0;
      this->serial_time = 0.0;
      this->is_rune = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _v0_type =
    double;
  _v0_type v0;
  using _motor_speed_type =
    double;
  _motor_speed_type motor_speed;
  using _serial_time_type =
    double;
  _serial_time_type serial_time;
  using _is_rune_type =
    bool;
  _is_rune_type is_rune;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__v0(
    const double & _arg)
  {
    this->v0 = _arg;
    return *this;
  }
  Type & set__motor_speed(
    const double & _arg)
  {
    this->motor_speed = _arg;
    return *this;
  }
  Type & set__serial_time(
    const double & _arg)
  {
    this->serial_time = _arg;
    return *this;
  }
  Type & set__is_rune(
    const bool & _arg)
  {
    this->is_rune = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::ReceiveSerial_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::ReceiveSerial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::ReceiveSerial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::ReceiveSerial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__ReceiveSerial
    std::shared_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__ReceiveSerial
    std::shared_ptr<rm_msgs::msg::ReceiveSerial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReceiveSerial_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->v0 != other.v0) {
      return false;
    }
    if (this->motor_speed != other.motor_speed) {
      return false;
    }
    if (this->serial_time != other.serial_time) {
      return false;
    }
    if (this->is_rune != other.is_rune) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReceiveSerial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReceiveSerial_

// alias to use template instance with default allocator
using ReceiveSerial =
  rm_msgs::msg::ReceiveSerial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_HPP_
