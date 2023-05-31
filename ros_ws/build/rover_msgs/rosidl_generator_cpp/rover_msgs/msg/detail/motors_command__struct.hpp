// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_HPP_
#define ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rover_msgs__msg__MotorsCommand __attribute__((deprecated))
#else
# define DEPRECATED__rover_msgs__msg__MotorsCommand __declspec(deprecated)
#endif

namespace rover_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorsCommand_
{
  using Type = MotorsCommand_<ContainerAllocator>;

  explicit MotorsCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorsCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _drive_motor_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _drive_motor_type drive_motor;
  using _corner_motor_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _corner_motor_type corner_motor;

  // setters for named parameter idiom
  Type & set__drive_motor(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->drive_motor = _arg;
    return *this;
  }
  Type & set__corner_motor(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->corner_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rover_msgs::msg::MotorsCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const rover_msgs::msg::MotorsCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rover_msgs::msg::MotorsCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rover_msgs::msg::MotorsCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rover_msgs__msg__MotorsCommand
    std::shared_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rover_msgs__msg__MotorsCommand
    std::shared_ptr<rover_msgs::msg::MotorsCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsCommand_ & other) const
  {
    if (this->drive_motor != other.drive_motor) {
      return false;
    }
    if (this->corner_motor != other.corner_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsCommand_

// alias to use template instance with default allocator
using MotorsCommand =
  rover_msgs::msg::MotorsCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rover_msgs

#endif  // ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_HPP_
