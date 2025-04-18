// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/SendSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__SEND_SERIAL__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__SEND_SERIAL__STRUCT_HPP_

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
# define DEPRECATED__rm_msgs__msg__SendSerial __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__SendSerial __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SendSerial_
{
  using Type = SendSerial_<ContainerAllocator>;

  explicit SendSerial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_tracking = false;
      this->is_can_hit = false;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->distance = 0.0;
    }
  }

  explicit SendSerial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_tracking = false;
      this->is_can_hit = false;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_tracking_type =
    bool;
  _is_tracking_type is_tracking;
  using _is_can_hit_type =
    bool;
  _is_can_hit_type is_can_hit;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_tracking(
    const bool & _arg)
  {
    this->is_tracking = _arg;
    return *this;
  }
  Type & set__is_can_hit(
    const bool & _arg)
  {
    this->is_can_hit = _arg;
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
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::SendSerial_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::SendSerial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::SendSerial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::SendSerial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__SendSerial
    std::shared_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__SendSerial
    std::shared_ptr<rm_msgs::msg::SendSerial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendSerial_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_tracking != other.is_tracking) {
      return false;
    }
    if (this->is_can_hit != other.is_can_hit) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendSerial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendSerial_

// alias to use template instance with default allocator
using SendSerial =
  rm_msgs::msg::SendSerial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__SEND_SERIAL__STRUCT_HPP_
