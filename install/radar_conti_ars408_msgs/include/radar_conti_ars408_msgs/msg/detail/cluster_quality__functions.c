// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `cluster_distlong_rms`
// Member `cluster_distlat_rms`
// Member `cluster_vrellong_rms`
// Member `cluster_vrellat_rms`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `cluster_pdh0`
// Member `cluster_invalidstate`
// Member `cluster_ambigstate`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__ClusterQuality__init(radar_conti_ars408_msgs__msg__ClusterQuality * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_distlong_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlong_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_distlat_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlat_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_vrellong_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellong_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_vrellat_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellat_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_pdh0
  if (!std_msgs__msg__String__init(&msg->cluster_pdh0)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_invalidstate
  if (!std_msgs__msg__String__init(&msg->cluster_invalidstate)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_ambigstate
  if (!std_msgs__msg__String__init(&msg->cluster_ambigstate)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ClusterQuality__fini(radar_conti_ars408_msgs__msg__ClusterQuality * msg)
{
  if (!msg) {
    return;
  }
  // cluster_distlong_rms
  std_msgs__msg__Float64__fini(&msg->cluster_distlong_rms);
  // cluster_distlat_rms
  std_msgs__msg__Float64__fini(&msg->cluster_distlat_rms);
  // cluster_vrellong_rms
  std_msgs__msg__Float64__fini(&msg->cluster_vrellong_rms);
  // cluster_vrellat_rms
  std_msgs__msg__Float64__fini(&msg->cluster_vrellat_rms);
  // cluster_pdh0
  std_msgs__msg__String__fini(&msg->cluster_pdh0);
  // cluster_invalidstate
  std_msgs__msg__String__fini(&msg->cluster_invalidstate);
  // cluster_ambigstate
  std_msgs__msg__String__fini(&msg->cluster_ambigstate);
}

radar_conti_ars408_msgs__msg__ClusterQuality *
radar_conti_ars408_msgs__msg__ClusterQuality__create()
{
  radar_conti_ars408_msgs__msg__ClusterQuality * msg = (radar_conti_ars408_msgs__msg__ClusterQuality *)malloc(sizeof(radar_conti_ars408_msgs__msg__ClusterQuality));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ClusterQuality));
  bool success = radar_conti_ars408_msgs__msg__ClusterQuality__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ClusterQuality__destroy(radar_conti_ars408_msgs__msg__ClusterQuality * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__init(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__ClusterQuality * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__ClusterQuality *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__ClusterQuality));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ClusterQuality__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ClusterQuality__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__ClusterQuality__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ClusterQuality__Sequence *
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array = (radar_conti_ars408_msgs__msg__ClusterQuality__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__fini(array);
  }
  free(array);
}
