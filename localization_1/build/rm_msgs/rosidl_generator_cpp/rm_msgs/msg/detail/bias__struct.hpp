// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__BIAS__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__BIAS__STRUCT_HPP_

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
# define DEPRECATED__rm_msgs__msg__Bias __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__Bias __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bias_
{
  using Type = Bias_<ContainerAllocator>;

  explicit Bias_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->need_t = 0.0;
      this->fly_t = 0.0;
      this->serial_bias_time = 0.0;
      this->latency_bias_time = 0.0;
      this->motor_bias_time = 0.0;
    }
  }

  explicit Bias_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->need_t = 0.0;
      this->fly_t = 0.0;
      this->serial_bias_time = 0.0;
      this->latency_bias_time = 0.0;
      this->motor_bias_time = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _need_t_type =
    double;
  _need_t_type need_t;
  using _fly_t_type =
    double;
  _fly_t_type fly_t;
  using _serial_bias_time_type =
    double;
  _serial_bias_time_type serial_bias_time;
  using _latency_bias_time_type =
    double;
  _latency_bias_time_type latency_bias_time;
  using _motor_bias_time_type =
    double;
  _motor_bias_time_type motor_bias_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__need_t(
    const double & _arg)
  {
    this->need_t = _arg;
    return *this;
  }
  Type & set__fly_t(
    const double & _arg)
  {
    this->fly_t = _arg;
    return *this;
  }
  Type & set__serial_bias_time(
    const double & _arg)
  {
    this->serial_bias_time = _arg;
    return *this;
  }
  Type & set__latency_bias_time(
    const double & _arg)
  {
    this->latency_bias_time = _arg;
    return *this;
  }
  Type & set__motor_bias_time(
    const double & _arg)
  {
    this->motor_bias_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::Bias_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::Bias_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::Bias_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::Bias_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::Bias_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::Bias_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::Bias_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::Bias_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::Bias_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::Bias_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__Bias
    std::shared_ptr<rm_msgs::msg::Bias_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__Bias
    std::shared_ptr<rm_msgs::msg::Bias_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bias_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->need_t != other.need_t) {
      return false;
    }
    if (this->fly_t != other.fly_t) {
      return false;
    }
    if (this->serial_bias_time != other.serial_bias_time) {
      return false;
    }
    if (this->latency_bias_time != other.latency_bias_time) {
      return false;
    }
    if (this->motor_bias_time != other.motor_bias_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bias_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bias_

// alias to use template instance with default allocator
using Bias =
  rm_msgs::msg::Bias_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__BIAS__STRUCT_HPP_
