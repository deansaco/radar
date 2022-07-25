// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `cluster_nofclustersnear`
// Member `cluster_nofclustersfar`
// Member `cluster_meascounter`
// Member `cluster_interfaceversion`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ClusterStatus__init(radar_conti_ars408_msgs__msg__ClusterStatus * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_nofclustersnear
  if (!std_msgs__msg__Int32__init(&msg->cluster_nofclustersnear)) {
    radar_conti_ars408_msgs__msg__ClusterStatus__fini(msg);
    return false;
  }
  // cluster_nofclustersfar
  if (!std_msgs__msg__Int32__init(&msg->cluster_nofclustersfar)) {
    radar_conti_ars408_msgs__msg__ClusterStatus__fini(msg);
    return false;
  }
  // cluster_meascounter
  if (!std_msgs__msg__Int32__init(&msg->cluster_meascounter)) {
    radar_conti_ars408_msgs__msg__ClusterStatus__fini(msg);
    return false;
  }
  // cluster_interfaceversion
  if (!std_msgs__msg__Int32__init(&msg->cluster_interfaceversion)) {
    radar_conti_ars408_msgs__msg__ClusterStatus__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ClusterStatus__fini(radar_conti_ars408_msgs__msg__ClusterStatus * msg)
{
  if (!msg) {
    return;
  }
  // cluster_nofclustersnear
  std_msgs__msg__Int32__fini(&msg->cluster_nofclustersnear);
  // cluster_nofclustersfar
  std_msgs__msg__Int32__fini(&msg->cluster_nofclustersfar);
  // cluster_meascounter
  std_msgs__msg__Int32__fini(&msg->cluster_meascounter);
  // cluster_interfaceversion
  std_msgs__msg__Int32__fini(&msg->cluster_interfaceversion);
}

radar_conti_ars408_msgs__msg__ClusterStatus *
radar_conti_ars408_msgs__msg__ClusterStatus__create()
{
  radar_conti_ars408_msgs__msg__ClusterStatus * msg = (radar_conti_ars408_msgs__msg__ClusterStatus *)malloc(sizeof(radar_conti_ars408_msgs__msg__ClusterStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ClusterStatus));
  bool success = radar_conti_ars408_msgs__msg__ClusterStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ClusterStatus__destroy(radar_conti_ars408_msgs__msg__ClusterStatus * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ClusterStatus__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ClusterStatus__Sequence__init(radar_conti_ars408_msgs__msg__ClusterStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ClusterStatus * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ClusterStatus *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ClusterStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ClusterStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ClusterStatus__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ClusterStatus__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ClusterStatus__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ClusterStatus__Sequence *
radar_conti_ars408_msgs__msg__ClusterStatus__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ClusterStatus__Sequence * array = (radar_conti_ars408_msgs__msg__ClusterStatus__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ClusterStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ClusterStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ClusterStatus__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterStatus__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ClusterStatus__Sequence__fini(array);
  }
  free(array);
}
