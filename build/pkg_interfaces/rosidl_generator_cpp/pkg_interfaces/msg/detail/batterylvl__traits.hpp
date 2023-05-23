// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg_interfaces:msg/Batterylvl.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__TRAITS_HPP_
#define PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__TRAITS_HPP_

#include "pkg_interfaces/msg/detail/batterylvl__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pkg_interfaces::msg::Batterylvl>()
{
  return "pkg_interfaces::msg::Batterylvl";
}

template<>
inline const char * name<pkg_interfaces::msg::Batterylvl>()
{
  return "pkg_interfaces/msg/Batterylvl";
}

template<>
struct has_fixed_size<pkg_interfaces::msg::Batterylvl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg_interfaces::msg::Batterylvl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pkg_interfaces::msg::Batterylvl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__TRAITS_HPP_
