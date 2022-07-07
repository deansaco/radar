// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_count`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `objects`
#include "radar_conti_ars408_msgs/msg/detail/object__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectList__init(radar_conti_ars408_msgs__msg__ObjectList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__ObjectList__fini(msg);
    return false;
  }
  // object_count
  if (!std_msgs__msg__Int32__init(&msg->object_count)) {
    radar_conti_ars408_msgs__msg__ObjectList__fini(msg);
    return false;
  }
  // objects
  if (!radar_conti_ars408_msgs__msg__Object__Sequence__init(&msg->objects, 0)) {
    radar_conti_ars408_msgs__msg__ObjectList__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectList__fini(radar_conti_ars408_msgs__msg__ObjectList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_count
  std_msgs__msg__Int32__fini(&msg->object_count);
  // objects
  radar_conti_ars408_msgs__msg__Object__Sequence__fini(&msg->objects);
}

radar_conti_ars408_msgs__msg__ObjectList *
radar_conti_ars408_msgs__msg__ObjectList__create()
{
  radar_conti_ars408_msgs__msg__ObjectList * msg = (radar_conti_ars408_msgs__msg__ObjectList *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectList));
  bool success = radar_conti_ars408_msgs__msg__ObjectList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectList__destroy(radar_conti_ars408_msgs__msg__ObjectList * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectList__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ObjectList__Sequence__init(radar_conti_ars408_msgs__msg__ObjectList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ObjectList * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectList *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ObjectList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectList__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectList__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ObjectList__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectList__Sequence *
radar_conti_ars408_msgs__msg__ObjectList__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ObjectList__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectList__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectList__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectList__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectList__Sequence__fini(array);
  }
  free(array);
}
