// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice
#include "rover_msgs/msg/detail/motors_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rover_msgs/msg/detail/motors_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rover_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_msgs
cdr_serialize(
  const rover_msgs::msg::MotorsCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: drive_motor
  {
    cdr << ros_message.drive_motor;
  }
  // Member: corner_motor
  {
    cdr << ros_message.corner_motor;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rover_msgs::msg::MotorsCommand & ros_message)
{
  // Member: drive_motor
  {
    cdr >> ros_message.drive_motor;
  }

  // Member: corner_motor
  {
    cdr >> ros_message.corner_motor;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_msgs
get_serialized_size(
  const rover_msgs::msg::MotorsCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: drive_motor
  {
    size_t array_size = ros_message.drive_motor.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.drive_motor[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: corner_motor
  {
    size_t array_size = ros_message.corner_motor.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.corner_motor[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_msgs
max_serialized_size_MotorsCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: drive_motor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: corner_motor
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

static bool _MotorsCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rover_msgs::msg::MotorsCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorsCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rover_msgs::msg::MotorsCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorsCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rover_msgs::msg::MotorsCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorsCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorsCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorsCommand__callbacks = {
  "rover_msgs::msg",
  "MotorsCommand",
  _MotorsCommand__cdr_serialize,
  _MotorsCommand__cdr_deserialize,
  _MotorsCommand__get_serialized_size,
  _MotorsCommand__max_serialized_size
};

static rosidl_message_type_support_t _MotorsCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorsCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rover_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rover_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_msgs::msg::MotorsCommand>()
{
  return &rover_msgs::msg::typesupport_fastrtps_cpp::_MotorsCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_msgs, msg, MotorsCommand)() {
  return &rover_msgs::msg::typesupport_fastrtps_cpp::_MotorsCommand__handle;
}

#ifdef __cplusplus
}
#endif
