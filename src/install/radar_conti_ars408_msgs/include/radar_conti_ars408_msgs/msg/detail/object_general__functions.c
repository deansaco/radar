// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_general__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obj_distlong`
// Member `obj_distlat`
// Member `obj_vrellong`
// Member `obj_vrellat`
// Member `obj_rcs`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `obj_dynprop`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectGeneral__init(radar_conti_ars408_msgs__msg__ObjectGeneral * msg)
{
  if (!msg) {
    return false;
  }
  // obj_distlong
  if (!std_msgs__msg__Float64__init(&msg->obj_distlong)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_distlat
  if (!std_msgs__msg__Float64__init(&msg->obj_distlat)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_vrellong
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellong)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_vrellat
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellat)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_dynprop
  if (!std_msgs__msg__Int32__init(&msg->obj_dynprop)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_rcs
  if (!std_msgs__msg__Float64__init(&msg->obj_rcs)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectGeneral__fini(radar_conti_ars408_msgs__msg__ObjectGeneral * msg)
{
  if (!msg) {
    return;
  }
  // obj_distlong
  std_msgs__msg__Float64__fini(&msg->obj_distlong);
  // obj_distlat
  std_msgs__msg__Float64__fini(&msg->obj_distlat);
  // obj_vrellong
  std_msgs__msg__Float64__fini(&msg->obj_vrellong);
  // obj_vrellat
  std_msgs__msg__Float64__fini(&msg->obj_vrellat);
  // obj_dynprop
  std_msgs__msg__Int32__fini(&msg->obj_dynprop);
  // obj_rcs
  std_msgs__msg__Float64__fini(&msg->obj_rcs);
}

radar_conti_ars408_msgs__msg__ObjectGeneral *
radar_conti_ars408_msgs__msg__ObjectGeneral__create()
{
  radar_conti_ars408_msgs__msg__ObjectGeneral * msg = (radar_conti_ars408_msgs__msg__ObjectGeneral *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral));
  bool success = radar_conti_ars408_msgs__msg__ObjectGeneral__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectGeneral__destroy(radar_conti_ars408_msgs__msg__ObjectGeneral * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__init(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ObjectGeneral * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectGeneral *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectGeneral__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence *
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__fini(array);
  }
  free(array);
}
