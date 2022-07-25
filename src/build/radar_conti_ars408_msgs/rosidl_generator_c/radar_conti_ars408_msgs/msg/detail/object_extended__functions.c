// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_extended__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obj_arellong`
// Member `obj_arellat`
// Member `obj_orientationangle`
// Member `obj_length`
// Member `obj_width`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `obj_class`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectExtended__init(radar_conti_ars408_msgs__msg__ObjectExtended * msg)
{
  if (!msg) {
    return false;
  }
  // obj_arellong
  if (!std_msgs__msg__Float64__init(&msg->obj_arellong)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_arellat
  if (!std_msgs__msg__Float64__init(&msg->obj_arellat)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_class
  if (!std_msgs__msg__Int32__init(&msg->obj_class)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_orientationangle
  if (!std_msgs__msg__Float64__init(&msg->obj_orientationangle)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_length
  if (!std_msgs__msg__Float64__init(&msg->obj_length)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_width
  if (!std_msgs__msg__Float64__init(&msg->obj_width)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectExtended__fini(radar_conti_ars408_msgs__msg__ObjectExtended * msg)
{
  if (!msg) {
    return;
  }
  // obj_arellong
  std_msgs__msg__Float64__fini(&msg->obj_arellong);
  // obj_arellat
  std_msgs__msg__Float64__fini(&msg->obj_arellat);
  // obj_class
  std_msgs__msg__Int32__fini(&msg->obj_class);
  // obj_orientationangle
  std_msgs__msg__Float64__fini(&msg->obj_orientationangle);
  // obj_length
  std_msgs__msg__Float64__fini(&msg->obj_length);
  // obj_width
  std_msgs__msg__Float64__fini(&msg->obj_width);
}

radar_conti_ars408_msgs__msg__ObjectExtended *
radar_conti_ars408_msgs__msg__ObjectExtended__create()
{
  radar_conti_ars408_msgs__msg__ObjectExtended * msg = (radar_conti_ars408_msgs__msg__ObjectExtended *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectExtended));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectExtended));
  bool success = radar_conti_ars408_msgs__msg__ObjectExtended__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectExtended__destroy(radar_conti_ars408_msgs__msg__ObjectExtended * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__init(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ObjectExtended * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectExtended *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ObjectExtended));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectExtended__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectExtended__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ObjectExtended__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectExtended__Sequence *
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectExtended__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__fini(array);
  }
  free(array);
}
