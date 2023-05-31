// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice
#include "rover_msgs/msg/detail/motors_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `drive_motor`
// Member `corner_motor`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rover_msgs__msg__MotorsCommand__init(rover_msgs__msg__MotorsCommand * msg)
{
  if (!msg) {
    return false;
  }
  // drive_motor
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->drive_motor, 0)) {
    rover_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  // corner_motor
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->corner_motor, 0)) {
    rover_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  return true;
}

void
rover_msgs__msg__MotorsCommand__fini(rover_msgs__msg__MotorsCommand * msg)
{
  if (!msg) {
    return;
  }
  // drive_motor
  rosidl_runtime_c__int32__Sequence__fini(&msg->drive_motor);
  // corner_motor
  rosidl_runtime_c__int32__Sequence__fini(&msg->corner_motor);
}

bool
rover_msgs__msg__MotorsCommand__are_equal(const rover_msgs__msg__MotorsCommand * lhs, const rover_msgs__msg__MotorsCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drive_motor
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->drive_motor), &(rhs->drive_motor)))
  {
    return false;
  }
  // corner_motor
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->corner_motor), &(rhs->corner_motor)))
  {
    return false;
  }
  return true;
}

bool
rover_msgs__msg__MotorsCommand__copy(
  const rover_msgs__msg__MotorsCommand * input,
  rover_msgs__msg__MotorsCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // drive_motor
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->drive_motor), &(output->drive_motor)))
  {
    return false;
  }
  // corner_motor
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->corner_motor), &(output->corner_motor)))
  {
    return false;
  }
  return true;
}

rover_msgs__msg__MotorsCommand *
rover_msgs__msg__MotorsCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_msgs__msg__MotorsCommand * msg = (rover_msgs__msg__MotorsCommand *)allocator.allocate(sizeof(rover_msgs__msg__MotorsCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rover_msgs__msg__MotorsCommand));
  bool success = rover_msgs__msg__MotorsCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rover_msgs__msg__MotorsCommand__destroy(rover_msgs__msg__MotorsCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rover_msgs__msg__MotorsCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rover_msgs__msg__MotorsCommand__Sequence__init(rover_msgs__msg__MotorsCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_msgs__msg__MotorsCommand * data = NULL;

  if (size) {
    data = (rover_msgs__msg__MotorsCommand *)allocator.zero_allocate(size, sizeof(rover_msgs__msg__MotorsCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rover_msgs__msg__MotorsCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rover_msgs__msg__MotorsCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rover_msgs__msg__MotorsCommand__Sequence__fini(rover_msgs__msg__MotorsCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rover_msgs__msg__MotorsCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rover_msgs__msg__MotorsCommand__Sequence *
rover_msgs__msg__MotorsCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_msgs__msg__MotorsCommand__Sequence * array = (rover_msgs__msg__MotorsCommand__Sequence *)allocator.allocate(sizeof(rover_msgs__msg__MotorsCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rover_msgs__msg__MotorsCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rover_msgs__msg__MotorsCommand__Sequence__destroy(rover_msgs__msg__MotorsCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rover_msgs__msg__MotorsCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rover_msgs__msg__MotorsCommand__Sequence__are_equal(const rover_msgs__msg__MotorsCommand__Sequence * lhs, const rover_msgs__msg__MotorsCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rover_msgs__msg__MotorsCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rover_msgs__msg__MotorsCommand__Sequence__copy(
  const rover_msgs__msg__MotorsCommand__Sequence * input,
  rover_msgs__msg__MotorsCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rover_msgs__msg__MotorsCommand);
    rover_msgs__msg__MotorsCommand * data =
      (rover_msgs__msg__MotorsCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rover_msgs__msg__MotorsCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rover_msgs__msg__MotorsCommand__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rover_msgs__msg__MotorsCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
