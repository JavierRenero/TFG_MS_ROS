// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg_interfaces:msg/Batterylvl.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__STRUCT_H_
#define PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Batterylvl in the package pkg_interfaces.
typedef struct pkg_interfaces__msg__Batterylvl
{
  int64_t level;
} pkg_interfaces__msg__Batterylvl;

// Struct for a sequence of pkg_interfaces__msg__Batterylvl.
typedef struct pkg_interfaces__msg__Batterylvl__Sequence
{
  pkg_interfaces__msg__Batterylvl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg_interfaces__msg__Batterylvl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG_INTERFACES__MSG__DETAIL__BATTERYLVL__STRUCT_H_
