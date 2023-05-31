// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rover_msgs/msg/detail/motors_command__rosidl_typesupport_introspection_c.h"
#include "rover_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rover_msgs/msg/detail/motors_command__functions.h"
#include "rover_msgs/msg/detail/motors_command__struct.h"


// Include directives for member types
// Member `drive_motor`
// Member `corner_motor`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_msgs__msg__MotorsCommand__init(message_memory);
}

void MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_fini_function(void * message_memory)
{
  rover_msgs__msg__MotorsCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_member_array[2] = {
  {
    "drive_motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_msgs__msg__MotorsCommand, drive_motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corner_motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_msgs__msg__MotorsCommand, corner_motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_members = {
  "rover_msgs__msg",  // message namespace
  "MotorsCommand",  // message name
  2,  // number of fields
  sizeof(rover_msgs__msg__MotorsCommand),
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_member_array,  // message members
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle = {
  0,
  &MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_msgs, msg, MotorsCommand)() {
  if (!MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle.typesupport_identifier) {
    MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
