// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/AssistData.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__ASSIST_DATA__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__ASSIST_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__AssistData __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__AssistData __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AssistData_
{
  using Type = AssistData_<ContainerAllocator>;

  explicit AssistData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rel_x = 0.0;
      this->rel_y = 0.0;
      this->rel_z = 0.0;
    }
  }

  explicit AssistData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rel_x = 0.0;
      this->rel_y = 0.0;
      this->rel_z = 0.0;
    }
  }

  // field types and members
  using _rel_x_type =
    double;
  _rel_x_type rel_x;
  using _rel_y_type =
    double;
  _rel_y_type rel_y;
  using _rel_z_type =
    double;
  _rel_z_type rel_z;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__rel_x(
    const double & _arg)
  {
    this->rel_x = _arg;
    return *this;
  }
  Type & set__rel_y(
    const double & _arg)
  {
    this->rel_y = _arg;
    return *this;
  }
  Type & set__rel_z(
    const double & _arg)
  {
    this->rel_z = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::AssistData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::AssistData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::AssistData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::AssistData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::AssistData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::AssistData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::AssistData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::AssistData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::AssistData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::AssistData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__AssistData
    std::shared_ptr<rm_msgs::msg::AssistData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__AssistData
    std::shared_ptr<rm_msgs::msg::AssistData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssistData_ & other) const
  {
    if (this->rel_x != other.rel_x) {
      return false;
    }
    if (this->rel_y != other.rel_y) {
      return false;
    }
    if (this->rel_z != other.rel_z) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssistData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssistData_

// alias to use template instance with default allocator
using AssistData =
  rm_msgs::msg::AssistData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__ASSIST_DATA__STRUCT_HPP_
