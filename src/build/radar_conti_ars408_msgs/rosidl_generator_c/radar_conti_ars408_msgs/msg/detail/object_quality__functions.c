// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_quality__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obj_distlong_rms`
// Member `obj_distlat_rms`
// Member `obj_vrellong_rms`
// Member `obj_vrellat_rms`
// Member `obj_arellong_rms`
// Member `obj_arellat_rms`
// Member `obj_orientation_rms`
// Member `obj_probofexist`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `obj_measstate`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectQuality__init(radar_conti_ars408_msgs__msg__ObjectQuality * msg)
{
  if (!msg) {
    return false;
  }
  // obj_distlong_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_distlong_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_distlat_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_distlat_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_vrellong_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellong_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_vrellat_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellat_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_arellong_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_arellong_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_arellat_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_arellat_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_orientation_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_orientation_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_probofexist
  if (!std_msgs__msg__Float64__init(&msg->obj_probofexist)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_measstate
  if (!std_msgs__msg__String__init(&msg->obj_measstate)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectQuality__fini(radar_conti_ars408_msgs__msg__ObjectQuality * msg)
{
  if (!msg) {
    return;
  }
  // obj_distlong_rms
  std_msgs__msg__Float64__fini(&msg->obj_distlong_rms);
  // obj_distlat_rms
  std_msgs__msg__Float64__fini(&msg->obj_distlat_rms);
  // obj_vrellong_rms
  std_msgs__msg__Float64__fini(&msg->obj_vrellong_rms);
  // obj_vrellat_rms
  std_msgs__msg__Float64__fini(&msg->obj_vrellat_rms);
  // obj_arellong_rms
  std_msgs__msg__Float64__fini(&msg->obj_arellong_rms);
  // obj_arellat_rms
  std_msgs__msg__Float64__fini(&msg->obj_arellat_rms);
  // obj_orientation_rms
  std_msgs__msg__Float64__fini(&msg->obj_orientation_rms);
  // obj_probofexist
  std_msgs__msg__Float64__fini(&msg->obj_probofexist);
  // obj_measstate
  std_msgs__msg__String__fini(&msg->obj_measstate);
}

radar_conti_ars408_msgs__msg__ObjectQuality *
radar_conti_ars408_msgs__msg__ObjectQuality__create()
{
  radar_conti_ars408_msgs__msg__ObjectQuality * msg = (radar_conti_ars408_msgs__msg__ObjectQuality *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectQuality));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectQuality));
  bool success = radar_conti_ars408_msgs__msg__ObjectQuality__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectQuality__destroy(radar_conti_ars408_msgs__msg__ObjectQuality * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__init(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ObjectQuality * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectQuality *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ObjectQuality));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectQuality__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectQuality__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ObjectQuality__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectQuality__Sequence *
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectQuality__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__fini(array);
  }
  free(array);
}
