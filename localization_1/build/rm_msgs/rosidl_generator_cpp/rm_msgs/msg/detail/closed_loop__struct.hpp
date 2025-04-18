// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_msgs:msg/ClosedLoop.idl
// generated code does not contain a copyright notice

#ifndef RM_MSGS__MSG__DETAIL__CLOSED_LOOP__STRUCT_HPP_
#define RM_MSGS__MSG__DETAIL__CLOSED_LOOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_header'
// Member 'shoot_header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'now_pose'
// Member 'pred_pose'
// Member 'now_armor_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_msgs__msg__ClosedLoop __attribute__((deprecated))
#else
# define DEPRECATED__rm_msgs__msg__ClosedLoop __declspec(deprecated)
#endif

namespace rm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClosedLoop_
{
  using Type = ClosedLoop_<ContainerAllocator>;

  explicit ClosedLoop_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_header(_init),
    shoot_header(_init),
    now_pose(_init),
    pred_pose(_init),
    now_armor_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->armor_num = 0;
      this->r = 0.0;
      this->another_r = 0.0;
      this->dz = 0.0;
      this->yaw = 0.0;
      this->c_to_a_pitch = 0.0;
      this->v0 = 0.0;
      this->theta = 0.0;
      this->fly_t = 0.0;
    }
  }

  explicit ClosedLoop_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_header(_alloc, _init),
    shoot_header(_alloc, _init),
    id(_alloc),
    now_pose(_alloc, _init),
    pred_pose(_alloc, _init),
    now_armor_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->armor_num = 0;
      this->r = 0.0;
      this->another_r = 0.0;
      this->dz = 0.0;
      this->yaw = 0.0;
      this->c_to_a_pitch = 0.0;
      this->v0 = 0.0;
      this->theta = 0.0;
      this->fly_t = 0.0;
    }
  }

  // field types and members
  using _image_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _image_header_type image_header;
  using _shoot_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _shoot_header_type shoot_header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _armor_num_type =
    int8_t;
  _armor_num_type armor_num;
  using _r_type =
    double;
  _r_type r;
  using _another_r_type =
    double;
  _another_r_type another_r;
  using _dz_type =
    double;
  _dz_type dz;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _c_to_a_pitch_type =
    double;
  _c_to_a_pitch_type c_to_a_pitch;
  using _now_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _now_pose_type now_pose;
  using _pred_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pred_pose_type pred_pose;
  using _now_armor_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _now_armor_pose_type now_armor_pose;
  using _v0_type =
    double;
  _v0_type v0;
  using _theta_type =
    double;
  _theta_type theta;
  using _fly_t_type =
    double;
  _fly_t_type fly_t;

  // setters for named parameter idiom
  Type & set__image_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->image_header = _arg;
    return *this;
  }
  Type & set__shoot_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->shoot_header = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__armor_num(
    const int8_t & _arg)
  {
    this->armor_num = _arg;
    return *this;
  }
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__another_r(
    const double & _arg)
  {
    this->another_r = _arg;
    return *this;
  }
  Type & set__dz(
    const double & _arg)
  {
    this->dz = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__c_to_a_pitch(
    const double & _arg)
  {
    this->c_to_a_pitch = _arg;
    return *this;
  }
  Type & set__now_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->now_pose = _arg;
    return *this;
  }
  Type & set__pred_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pred_pose = _arg;
    return *this;
  }
  Type & set__now_armor_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->now_armor_pose = _arg;
    return *this;
  }
  Type & set__v0(
    const double & _arg)
  {
    this->v0 = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__fly_t(
    const double & _arg)
  {
    this->fly_t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_msgs::msg::ClosedLoop_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_msgs::msg::ClosedLoop_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::ClosedLoop_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_msgs::msg::ClosedLoop_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_msgs__msg__ClosedLoop
    std::shared_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_msgs__msg__ClosedLoop
    std::shared_ptr<rm_msgs::msg::ClosedLoop_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClosedLoop_ & other) const
  {
    if (this->image_header != other.image_header) {
      return false;
    }
    if (this->shoot_header != other.shoot_header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->armor_num != other.armor_num) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->another_r != other.another_r) {
      return false;
    }
    if (this->dz != other.dz) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->c_to_a_pitch != other.c_to_a_pitch) {
      return false;
    }
    if (this->now_pose != other.now_pose) {
      return false;
    }
    if (this->pred_pose != other.pred_pose) {
      return false;
    }
    if (this->now_armor_pose != other.now_armor_pose) {
      return false;
    }
    if (this->v0 != other.v0) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->fly_t != other.fly_t) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClosedLoop_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClosedLoop_

// alias to use template instance with default allocator
using ClosedLoop =
  rm_msgs::msg::ClosedLoop_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_msgs

#endif  // RM_MSGS__MSG__DETAIL__CLOSED_LOOP__STRUCT_HPP_
