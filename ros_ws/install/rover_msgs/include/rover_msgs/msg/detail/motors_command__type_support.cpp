// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rover_msgs/msg/detail/motors_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rover_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorsCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rover_msgs::msg::MotorsCommand(_init);
}

void MotorsCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rover_msgs::msg::MotorsCommand *>(message_memory);
  typed_message->~MotorsCommand();
}

size_t size_function__MotorsCommand__drive_motor(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorsCommand__drive_motor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCommand__drive_motor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorsCommand__drive_motor(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorsCommand__corner_motor(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorsCommand__corner_motor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCommand__corner_motor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorsCommand__corner_motor(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorsCommand_message_member_array[2] = {
  {
    "drive_motor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_msgs::msg::MotorsCommand, drive_motor),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCommand__drive_motor,  // size() function pointer
    get_const_function__MotorsCommand__drive_motor,  // get_const(index) function pointer
    get_function__MotorsCommand__drive_motor,  // get(index) function pointer
    resize_function__MotorsCommand__drive_motor  // resize(index) function pointer
  },
  {
    "corner_motor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_msgs::msg::MotorsCommand, corner_motor),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCommand__corner_motor,  // size() function pointer
    get_const_function__MotorsCommand__corner_motor,  // get_const(index) function pointer
    get_function__MotorsCommand__corner_motor,  // get(index) function pointer
    resize_function__MotorsCommand__corner_motor  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorsCommand_message_members = {
  "rover_msgs::msg",  // message namespace
  "MotorsCommand",  // message name
  2,  // number of fields
  sizeof(rover_msgs::msg::MotorsCommand),
  MotorsCommand_message_member_array,  // message members
  MotorsCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorsCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorsCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rover_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_msgs::msg::MotorsCommand>()
{
  return &::rover_msgs::msg::rosidl_typesupport_introspection_cpp::MotorsCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_msgs, msg, MotorsCommand)() {
  return &::rover_msgs::msg::rosidl_typesupport_introspection_cpp::MotorsCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
