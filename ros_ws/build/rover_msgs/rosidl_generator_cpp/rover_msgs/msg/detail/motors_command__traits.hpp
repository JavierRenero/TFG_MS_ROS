// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__TRAITS_HPP_
#define ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__TRAITS_HPP_

#include "rover_msgs/msg/detail/motors_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rover_msgs::msg::MotorsCommand>()
{
  return "rover_msgs::msg::MotorsCommand";
}

template<>
inline const char * name<rover_msgs::msg::MotorsCommand>()
{
  return "rover_msgs/msg/MotorsCommand";
}

template<>
struct has_fixed_size<rover_msgs::msg::MotorsCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rover_msgs::msg::MotorsCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rover_msgs::msg::MotorsCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__TRAITS_HPP_
