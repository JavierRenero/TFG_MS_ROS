// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice
#include "rover_msgs/msg/detail/motors_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rover_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rover_msgs/msg/detail/motors_command__struct.h"
#include "rover_msgs/msg/detail/motors_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // corner_motor, drive_motor
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // corner_motor, drive_motor

// forward declare type support functions


using _MotorsCommand__ros_msg_type = rover_msgs__msg__MotorsCommand;

static bool _MotorsCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorsCommand__ros_msg_type * ros_message = static_cast<const _MotorsCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: drive_motor
  {
    size_t size = ros_message->drive_motor.size;
    auto array_ptr = ros_message->drive_motor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: corner_motor
  {
    size_t size = ros_message->corner_motor.size;
    auto array_ptr = ros_message->corner_motor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MotorsCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorsCommand__ros_msg_type * ros_message = static_cast<_MotorsCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: drive_motor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->drive_motor.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->drive_motor);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->drive_motor, size)) {
      return "failed to create array for field 'drive_motor'";
    }
    auto array_ptr = ros_message->drive_motor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: corner_motor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->corner_motor.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->corner_motor);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->corner_motor, size)) {
      return "failed to create array for field 'corner_motor'";
    }
    auto array_ptr = ros_message->corner_motor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_msgs
size_t get_serialized_size_rover_msgs__msg__MotorsCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorsCommand__ros_msg_type * ros_message = static_cast<const _MotorsCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name drive_motor
  {
    size_t array_size = ros_message->drive_motor.size;
    auto array_ptr = ros_message->drive_motor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name corner_motor
  {
    size_t array_size = ros_message->corner_motor.size;
    auto array_ptr = ros_message->corner_motor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorsCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rover_msgs__msg__MotorsCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_msgs
size_t max_serialized_size_rover_msgs__msg__MotorsCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: drive_motor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: corner_motor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorsCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rover_msgs__msg__MotorsCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorsCommand = {
  "rover_msgs::msg",
  "MotorsCommand",
  _MotorsCommand__cdr_serialize,
  _MotorsCommand__cdr_deserialize,
  _MotorsCommand__get_serialized_size,
  _MotorsCommand__max_serialized_size
};

static rosidl_message_type_support_t _MotorsCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorsCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rover_msgs, msg, MotorsCommand)() {
  return &_MotorsCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
