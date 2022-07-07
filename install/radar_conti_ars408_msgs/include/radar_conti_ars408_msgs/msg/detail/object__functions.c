// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obj_id`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `object_general`
#include "radar_conti_ars408_msgs/msg/detail/object_general__functions.h"
// Member `object_extended`
#include "radar_conti_ars408_msgs/msg/detail/object_extended__functions.h"
// Member `object_quality`
#include "radar_conti_ars408_msgs/msg/detail/object_quality__functions.h"

bool
radar_conti_ars408_msgs__msg__Object__init(radar_conti_ars408_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // obj_id
  if (!std_msgs__msg__Int32__init(&msg->obj_id)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  // object_general
  if (!radar_conti_ars408_msgs__msg__ObjectGeneral__init(&msg->object_general)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  // object_extended
  if (!radar_conti_ars408_msgs__msg__ObjectExtended__init(&msg->object_extended)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  // object_quality
  if (!radar_conti_ars408_msgs__msg__ObjectQuality__init(&msg->object_quality)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__Object__fini(radar_conti_ars408_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // obj_id
  std_msgs__msg__Int32__fini(&msg->obj_id);
  // object_general
  radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&msg->object_general);
  // object_extended
  radar_conti_ars408_msgs__msg__ObjectExtended__fini(&msg->object_extended);
  // object_quality
  radar_conti_ars408_msgs__msg__ObjectQuality__fini(&msg->object_quality);
}

radar_conti_ars408_msgs__msg__Object *
radar_conti_ars408_msgs__msg__Object__create()
{
  radar_conti_ars408_msgs__msg__Object * msg = (radar_conti_ars408_msgs__msg__Object *)malloc(sizeof(radar_conti_ars408_msgs__msg__Object));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__Object));
  bool success = radar_conti_ars408_msgs__msg__Object__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__Object__destroy(radar_conti_ars408_msgs__msg__Object * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__Object__Sequence__init(radar_conti_ars408_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__Object * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__Object *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__Object));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__Object__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__Object__Sequence__fini(radar_conti_ars408_msgs__msg__Object__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__Object__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__Object__Sequence *
radar_conti_ars408_msgs__msg__Object__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__Object__Sequence * array = (radar_conti_ars408_msgs__msg__Object__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__Object__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__Object__Sequence__destroy(radar_conti_ars408_msgs__msg__Object__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__Object__Sequence__fini(array);
  }
  free(array);
}
