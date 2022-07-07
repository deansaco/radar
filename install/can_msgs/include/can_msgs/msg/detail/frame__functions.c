// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_msgs:msg/Frame.idl
// generated code does not contain a copyright notice
#include "can_msgs/msg/detail/frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
can_msgs__msg__Frame__init(can_msgs__msg__Frame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    can_msgs__msg__Frame__fini(msg);
    return false;
  }
  // id
  // dlc
  // data
  // err
  // rtr
  // eff
  return true;
}

void
can_msgs__msg__Frame__fini(can_msgs__msg__Frame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // dlc
  // data
  // err
  // rtr
  // eff
}

can_msgs__msg__Frame *
can_msgs__msg__Frame__create()
{
  can_msgs__msg__Frame * msg = (can_msgs__msg__Frame *)malloc(sizeof(can_msgs__msg__Frame));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_msgs__msg__Frame));
  bool success = can_msgs__msg__Frame__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
can_msgs__msg__Frame__destroy(can_msgs__msg__Frame * msg)
{
  if (msg) {
    can_msgs__msg__Frame__fini(msg);
  }
  free(msg);
}


bool
can_msgs__msg__Frame__Sequence__init(can_msgs__msg__Frame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  can_msgs__msg__Frame * data = NULL;
  if (size) {
    data = (can_msgs__msg__Frame *)calloc(size, sizeof(can_msgs__msg__Frame));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_msgs__msg__Frame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_msgs__msg__Frame__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
can_msgs__msg__Frame__Sequence__fini(can_msgs__msg__Frame__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      can_msgs__msg__Frame__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

can_msgs__msg__Frame__Sequence *
can_msgs__msg__Frame__Sequence__create(size_t size)
{
  can_msgs__msg__Frame__Sequence * array = (can_msgs__msg__Frame__Sequence *)malloc(sizeof(can_msgs__msg__Frame__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = can_msgs__msg__Frame__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
can_msgs__msg__Frame__Sequence__destroy(can_msgs__msg__Frame__Sequence * array)
{
  if (array) {
    can_msgs__msg__Frame__Sequence__fini(array);
  }
  free(array);
}
