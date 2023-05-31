// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_H_
#define ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'drive_motor'
// Member 'corner_motor'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MotorsCommand in the package rover_msgs.
typedef struct rover_msgs__msg__MotorsCommand
{
  rosidl_runtime_c__int32__Sequence drive_motor;
  rosidl_runtime_c__int32__Sequence corner_motor;
} rover_msgs__msg__MotorsCommand;

// Struct for a sequence of rover_msgs__msg__MotorsCommand.
typedef struct rover_msgs__msg__MotorsCommand__Sequence
{
  rover_msgs__msg__MotorsCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_msgs__msg__MotorsCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_H_
