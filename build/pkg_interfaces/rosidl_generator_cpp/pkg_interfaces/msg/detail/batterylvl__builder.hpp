// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg_interfaces:msg/Batterylvl.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__BUILDER_HPP_
#define PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__BUILDER_HPP_

#include "pkg_interfaces/msg/detail/batterylvl__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg_interfaces
{

namespace msg
{

namespace builder
{

class Init_Batterylvl_level
{
public:
  Init_Batterylvl_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg_interfaces::msg::Batterylvl level(::pkg_interfaces::msg::Batterylvl::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::msg::Batterylvl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::msg::Batterylvl>()
{
  return pkg_interfaces::msg::builder::Init_Batterylvl_level();
}

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__BUILDER_HPP_
