// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg_interfaces:msg/Batterylvl.idl
// generated code does not contain a copyright notice
#include "pkg_interfaces/msg/detail/batterylvl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pkg_interfaces__msg__Batterylvl__init(pkg_interfaces__msg__Batterylvl * msg)
{
  if (!msg) {
    return false;
  }
  // level
  return true;
}

void
pkg_interfaces__msg__Batterylvl__fini(pkg_interfaces__msg__Batterylvl * msg)
{
  if (!msg) {
    return;
  }
  // level
}

bool
pkg_interfaces__msg__Batterylvl__are_equal(const pkg_interfaces__msg__Batterylvl * lhs, const pkg_interfaces__msg__Batterylvl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  return true;
}

bool
pkg_interfaces__msg__Batterylvl__copy(
  const pkg_interfaces__msg__Batterylvl * input,
  pkg_interfaces__msg__Batterylvl * output)
{
  if (!input || !output) {
    return false;
  }
  // level
  output->level = input->level;
  return true;
}

pkg_interfaces__msg__Batterylvl *
pkg_interfaces__msg__Batterylvl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg_interfaces__msg__Batterylvl * msg = (pkg_interfaces__msg__Batterylvl *)allocator.allocate(sizeof(pkg_interfaces__msg__Batterylvl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg_interfaces__msg__Batterylvl));
  bool success = pkg_interfaces__msg__Batterylvl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pkg_interfaces__msg__Batterylvl__destroy(pkg_interfaces__msg__Batterylvl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pkg_interfaces__msg__Batterylvl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pkg_interfaces__msg__Batterylvl__Sequence__init(pkg_interfaces__msg__Batterylvl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg_interfaces__msg__Batterylvl * data = NULL;

  if (size) {
    data = (pkg_interfaces__msg__Batterylvl *)allocator.zero_allocate(size, sizeof(pkg_interfaces__msg__Batterylvl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg_interfaces__msg__Batterylvl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg_interfaces__msg__Batterylvl__fini(&data[i - 1]);
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
pkg_interfaces__msg__Batterylvl__Sequence__fini(pkg_interfaces__msg__Batterylvl__Sequence * array)
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
      pkg_interfaces__msg__Batterylvl__fini(&array->data[i]);
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

pkg_interfaces__msg__Batterylvl__Sequence *
pkg_interfaces__msg__Batterylvl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg_interfaces__msg__Batterylvl__Sequence * array = (pkg_interfaces__msg__Batterylvl__Sequence *)allocator.allocate(sizeof(pkg_interfaces__msg__Batterylvl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pkg_interfaces__msg__Batterylvl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pkg_interfaces__msg__Batterylvl__Sequence__destroy(pkg_interfaces__msg__Batterylvl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pkg_interfaces__msg__Batterylvl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pkg_interfaces__msg__Batterylvl__Sequence__are_equal(const pkg_interfaces__msg__Batterylvl__Sequence * lhs, const pkg_interfaces__msg__Batterylvl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pkg_interfaces__msg__Batterylvl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pkg_interfaces__msg__Batterylvl__Sequence__copy(
  const pkg_interfaces__msg__Batterylvl__Sequence * input,
  pkg_interfaces__msg__Batterylvl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pkg_interfaces__msg__Batterylvl);
    pkg_interfaces__msg__Batterylvl * data =
      (pkg_interfaces__msg__Batterylvl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pkg_interfaces__msg__Batterylvl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pkg_interfaces__msg__Batterylvl__fini(&data[i]);
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
    if (!pkg_interfaces__msg__Batterylvl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
