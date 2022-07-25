// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `cluster_id`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `cluster_general`
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__functions.h"
// Member `cluster_quality`
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__functions.h"

bool
radar_conti_ars408_msgs__msg__Cluster__init(radar_conti_ars408_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_id
  if (!std_msgs__msg__Int32__init(&msg->cluster_id)) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // cluster_general
  if (!radar_conti_ars408_msgs__msg__ClusterGeneral__init(&msg->cluster_general)) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // cluster_quality
  if (!radar_conti_ars408_msgs__msg__ClusterQuality__init(&msg->cluster_quality)) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__Cluster__fini(radar_conti_ars408_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return;
  }
  // cluster_id
  std_msgs__msg__Int32__fini(&msg->cluster_id);
  // cluster_general
  radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&msg->cluster_general);
  // cluster_quality
  radar_conti_ars408_msgs__msg__ClusterQuality__fini(&msg->cluster_quality);
}

radar_conti_ars408_msgs__msg__Cluster *
radar_conti_ars408_msgs__msg__Cluster__create()
{
  radar_conti_ars408_msgs__msg__Cluster * msg = (radar_conti_ars408_msgs__msg__Cluster *)malloc(sizeof(radar_conti_ars408_msgs__msg__Cluster));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__Cluster));
  bool success = radar_conti_ars408_msgs__msg__Cluster__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__Cluster__destroy(radar_conti_ars408_msgs__msg__Cluster * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__Cluster__Sequence__init(radar_conti_ars408_msgs__msg__Cluster__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__Cluster * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__Cluster *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__Cluster));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__Cluster__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__Cluster__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__Cluster__Sequence__fini(radar_conti_ars408_msgs__msg__Cluster__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__Cluster__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__Cluster__Sequence *
radar_conti_ars408_msgs__msg__Cluster__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__Cluster__Sequence * array = (radar_conti_ars408_msgs__msg__Cluster__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__Cluster__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__Cluster__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__Cluster__Sequence__destroy(radar_conti_ars408_msgs__msg__Cluster__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__Cluster__Sequence__fini(array);
  }
  free(array);
}
