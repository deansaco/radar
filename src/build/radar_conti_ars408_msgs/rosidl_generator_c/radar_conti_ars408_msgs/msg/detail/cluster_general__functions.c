// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `cluster_distlong`
// Member `cluster_distlat`
// Member `cluster_vrellong`
// Member `cluster_vrellat`
// Member `cluster_rcs`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `cluster_dynprop`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ClusterGeneral__init(radar_conti_ars408_msgs__msg__ClusterGeneral * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_distlong
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlong)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_distlat
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlat)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_vrellong
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellong)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_vrellat
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellat)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_dynprop
  if (!std_msgs__msg__Int32__init(&msg->cluster_dynprop)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_rcs
  if (!std_msgs__msg__Float64__init(&msg->cluster_rcs)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ClusterGeneral__fini(radar_conti_ars408_msgs__msg__ClusterGeneral * msg)
{
  if (!msg) {
    return;
  }
  // cluster_distlong
  std_msgs__msg__Float64__fini(&msg->cluster_distlong);
  // cluster_distlat
  std_msgs__msg__Float64__fini(&msg->cluster_distlat);
  // cluster_vrellong
  std_msgs__msg__Float64__fini(&msg->cluster_vrellong);
  // cluster_vrellat
  std_msgs__msg__Float64__fini(&msg->cluster_vrellat);
  // cluster_dynprop
  std_msgs__msg__Int32__fini(&msg->cluster_dynprop);
  // cluster_rcs
  std_msgs__msg__Float64__fini(&msg->cluster_rcs);
}

radar_conti_ars408_msgs__msg__ClusterGeneral *
radar_conti_ars408_msgs__msg__ClusterGeneral__create()
{
  radar_conti_ars408_msgs__msg__ClusterGeneral * msg = (radar_conti_ars408_msgs__msg__ClusterGeneral *)malloc(sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral));
  bool success = radar_conti_ars408_msgs__msg__ClusterGeneral__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ClusterGeneral__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ClusterGeneral * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ClusterGeneral *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ClusterGeneral__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence *
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array = (radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini(array);
  }
  free(array);
}
