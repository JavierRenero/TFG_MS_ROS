// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pkg_interfaces:msg/Batterylvl.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__STRUCT_HPP_
#define PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pkg_interfaces__msg__Batterylvl __attribute__((deprecated))
#else
# define DEPRECATED__pkg_interfaces__msg__Batterylvl __declspec(deprecated)
#endif

namespace pkg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Batterylvl_
{
  using Type = Batterylvl_<ContainerAllocator>;

  explicit Batterylvl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0ll;
    }
  }

  explicit Batterylvl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0ll;
    }
  }

  // field types and members
  using _level_type =
    int64_t;
  _level_type level;

  // setters for named parameter idiom
  Type & set__level(
    const int64_t & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pkg_interfaces::msg::Batterylvl_<ContainerAllocator> *;
  using ConstRawPtr =
    const pkg_interfaces::msg::Batterylvl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::msg::Batterylvl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pkg_interfaces::msg::Batterylvl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pkg_interfaces__msg__Batterylvl
    std::shared_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pkg_interfaces__msg__Batterylvl
    std::shared_ptr<pkg_interfaces::msg::Batterylvl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Batterylvl_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const Batterylvl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Batterylvl_

// alias to use template instance with default allocator
using Batterylvl =
  pkg_interfaces::msg::Batterylvl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__STRUCT_HPP_
