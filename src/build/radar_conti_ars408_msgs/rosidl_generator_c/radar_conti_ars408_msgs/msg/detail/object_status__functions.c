// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `obj_nofobjects`
// Member `obj_meascounter`
// Member `obj_interfaceversion`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectStatus__init(radar_conti_ars408_msgs__msg__ObjectStatus * msg)
{
  if (!msg) {
    return false;
  }
  // obj_nofobjects
  if (!std_msgs__msg__Int32__init(&msg->obj_nofobjects)) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // obj_meascounter
  if (!std_msgs__msg__Int32__init(&msg->obj_meascounter)) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // obj_interfaceversion
  if (!std_msgs__msg__Int32__init(&msg->obj_interfaceversion)) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectStatus__fini(radar_conti_ars408_msgs__msg__ObjectStatus * msg)
{
  if (!msg) {
    return;
  }
  // obj_nofobjects
  std_msgs__msg__Int32__fini(&msg->obj_nofobjects);
  // obj_meascounter
  std_msgs__msg__Int32__fini(&msg->obj_meascounter);
  // obj_interfaceversion
  std_msgs__msg__Int32__fini(&msg->obj_interfaceversion);
}

radar_conti_ars408_msgs__msg__ObjectStatus *
radar_conti_ars408_msgs__msg__ObjectStatus__create()
{
  radar_conti_ars408_msgs__msg__ObjectStatus * msg = (radar_conti_ars408_msgs__msg__ObjectStatus *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectStatus));
  bool success = radar_conti_ars408_msgs__msg__ObjectStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectStatus__destroy(radar_conti_ars408_msgs__msg__ObjectStatus * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__init(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ObjectStatus * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectStatus *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ObjectStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectStatus__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ObjectStatus__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectStatus__Sequence *
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectStatus__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__fini(array);
  }
  free(array);
}
