// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/version_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `version_majorrelease`
// Member `version_minorrelease`
// Member `version_patchlevel`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `version_extendedrange`
// Member `version_countrycode`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__VersionID__init(radar_conti_ars408_msgs__msg__VersionID * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_majorrelease
  if (!std_msgs__msg__Int32__init(&msg->version_majorrelease)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_minorrelease
  if (!std_msgs__msg__Int32__init(&msg->version_minorrelease)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_patchlevel
  if (!std_msgs__msg__Int32__init(&msg->version_patchlevel)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_extendedrange
  if (!std_msgs__msg__String__init(&msg->version_extendedrange)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_countrycode
  if (!std_msgs__msg__String__init(&msg->version_countrycode)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__VersionID__fini(radar_conti_ars408_msgs__msg__VersionID * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version_majorrelease
  std_msgs__msg__Int32__fini(&msg->version_majorrelease);
  // version_minorrelease
  std_msgs__msg__Int32__fini(&msg->version_minorrelease);
  // version_patchlevel
  std_msgs__msg__Int32__fini(&msg->version_patchlevel);
  // version_extendedrange
  std_msgs__msg__String__fini(&msg->version_extendedrange);
  // version_countrycode
  std_msgs__msg__String__fini(&msg->version_countrycode);
}

radar_conti_ars408_msgs__msg__VersionID *
radar_conti_ars408_msgs__msg__VersionID__create()
{
  radar_conti_ars408_msgs__msg__VersionID * msg = (radar_conti_ars408_msgs__msg__VersionID *)malloc(sizeof(radar_conti_ars408_msgs__msg__VersionID));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__VersionID));
  bool success = radar_conti_ars408_msgs__msg__VersionID__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__VersionID__destroy(radar_conti_ars408_msgs__msg__VersionID * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__VersionID__Sequence__init(radar_conti_ars408_msgs__msg__VersionID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__VersionID * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__VersionID *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__VersionID));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__VersionID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__VersionID__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__VersionID__Sequence__fini(radar_conti_ars408_msgs__msg__VersionID__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__VersionID__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__VersionID__Sequence *
radar_conti_ars408_msgs__msg__VersionID__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__VersionID__Sequence * array = (radar_conti_ars408_msgs__msg__VersionID__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__VersionID__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__VersionID__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__VersionID__Sequence__destroy(radar_conti_ars408_msgs__msg__VersionID__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__VersionID__Sequence__fini(array);
  }
  free(array);
}
