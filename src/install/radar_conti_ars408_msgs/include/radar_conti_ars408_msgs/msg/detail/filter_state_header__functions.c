// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/filter_state_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `filterstate_nofclusterfiltercfg`
// Member `filterstate_nofobjectfiltercfg`
#include "std_msgs/msg/detail/u_int8__functions.h"

bool
radar_conti_ars408_msgs__msg__FilterStateHeader__init(radar_conti_ars408_msgs__msg__FilterStateHeader * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__FilterStateHeader__fini(msg);
    return false;
  }
  // filterstate_nofclusterfiltercfg
  if (!std_msgs__msg__UInt8__init(&msg->filterstate_nofclusterfiltercfg)) {
    radar_conti_ars408_msgs__msg__FilterStateHeader__fini(msg);
    return false;
  }
  // filterstate_nofobjectfiltercfg
  if (!std_msgs__msg__UInt8__init(&msg->filterstate_nofobjectfiltercfg)) {
    radar_conti_ars408_msgs__msg__FilterStateHeader__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__FilterStateHeader__fini(radar_conti_ars408_msgs__msg__FilterStateHeader * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // filterstate_nofclusterfiltercfg
  std_msgs__msg__UInt8__fini(&msg->filterstate_nofclusterfiltercfg);
  // filterstate_nofobjectfiltercfg
  std_msgs__msg__UInt8__fini(&msg->filterstate_nofobjectfiltercfg);
}

radar_conti_ars408_msgs__msg__FilterStateHeader *
radar_conti_ars408_msgs__msg__FilterStateHeader__create()
{
  radar_conti_ars408_msgs__msg__FilterStateHeader * msg = (radar_conti_ars408_msgs__msg__FilterStateHeader *)malloc(sizeof(radar_conti_ars408_msgs__msg__FilterStateHeader));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__FilterStateHeader));
  bool success = radar_conti_ars408_msgs__msg__FilterStateHeader__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__FilterStateHeader__destroy(radar_conti_ars408_msgs__msg__FilterStateHeader * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__FilterStateHeader__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence__init(radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__FilterStateHeader * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__FilterStateHeader *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__FilterStateHeader));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__FilterStateHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__FilterStateHeader__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence__fini(radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__FilterStateHeader__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence *
radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence * array = (radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence__destroy(radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence__fini(array);
  }
  free(array);
}
