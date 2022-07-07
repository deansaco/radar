// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/radar_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radarcfg_storeinnvm_valid`
// Member `radarcfg_sortindex_valid`
// Member `radarcfg_sendextinfo_valid`
// Member `radarcfg_sendquality_valid`
// Member `radarcfg_outputtype_valid`
// Member `radarcfg_radarpower_valid`
// Member `radarcfg_sensorid_valid`
// Member `radarcfg_maxdistance_valid`
// Member `radarcfg_maxdistance`
// Member `radarcfg_radarpower`
// Member `radarcfg_outputtype`
// Member `radarcfg_sensorid`
// Member `radarcfg_storeinnvm`
// Member `radarcfg_sortindex`
// Member `radarcfg_sendextinfo`
// Member `radarcfg_sendquality`
// Member `radarcfg_ctrlrelay`
// Member `radarcfg_ctrlrelay_valid`
// Member `radarcfg_rcs_threshold`
// Member `radarcfg_rcs_threshold_valid`
#include "std_msgs/msg/detail/u_int8__functions.h"

bool
radar_conti_ars408_msgs__msg__RadarConfiguration__init(radar_conti_ars408_msgs__msg__RadarConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_storeinnvm_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_storeinnvm_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sortindex_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sortindex_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendextinfo_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendextinfo_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendquality_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendquality_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_outputtype_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_outputtype_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_radarpower_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_radarpower_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sensorid_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sensorid_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_maxdistance_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_maxdistance_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_maxdistance
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_maxdistance)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_radarpower
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_radarpower)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_outputtype
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_outputtype)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sensorid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sensorid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_storeinnvm
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_storeinnvm)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sortindex
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sortindex)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendextinfo
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendextinfo)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendquality
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendquality)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_ctrlrelay
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_ctrlrelay)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_ctrlrelay_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_ctrlrelay_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_rcs_threshold
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_rcs_threshold)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_rcs_threshold_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_rcs_threshold_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__RadarConfiguration__fini(radar_conti_ars408_msgs__msg__RadarConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radarcfg_storeinnvm_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_storeinnvm_valid);
  // radarcfg_sortindex_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sortindex_valid);
  // radarcfg_sendextinfo_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendextinfo_valid);
  // radarcfg_sendquality_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendquality_valid);
  // radarcfg_outputtype_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_outputtype_valid);
  // radarcfg_radarpower_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_radarpower_valid);
  // radarcfg_sensorid_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sensorid_valid);
  // radarcfg_maxdistance_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_maxdistance_valid);
  // radarcfg_maxdistance
  std_msgs__msg__UInt8__fini(&msg->radarcfg_maxdistance);
  // radarcfg_radarpower
  std_msgs__msg__UInt8__fini(&msg->radarcfg_radarpower);
  // radarcfg_outputtype
  std_msgs__msg__UInt8__fini(&msg->radarcfg_outputtype);
  // radarcfg_sensorid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sensorid);
  // radarcfg_storeinnvm
  std_msgs__msg__UInt8__fini(&msg->radarcfg_storeinnvm);
  // radarcfg_sortindex
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sortindex);
  // radarcfg_sendextinfo
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendextinfo);
  // radarcfg_sendquality
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendquality);
  // radarcfg_ctrlrelay
  std_msgs__msg__UInt8__fini(&msg->radarcfg_ctrlrelay);
  // radarcfg_ctrlrelay_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_ctrlrelay_valid);
  // radarcfg_rcs_threshold
  std_msgs__msg__UInt8__fini(&msg->radarcfg_rcs_threshold);
  // radarcfg_rcs_threshold_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_rcs_threshold_valid);
}

radar_conti_ars408_msgs__msg__RadarConfiguration *
radar_conti_ars408_msgs__msg__RadarConfiguration__create()
{
  radar_conti_ars408_msgs__msg__RadarConfiguration * msg = (radar_conti_ars408_msgs__msg__RadarConfiguration *)malloc(sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration));
  bool success = radar_conti_ars408_msgs__msg__RadarConfiguration__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__RadarConfiguration__destroy(radar_conti_ars408_msgs__msg__RadarConfiguration * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__init(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__RadarConfiguration * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__RadarConfiguration *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__RadarConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__RadarConfiguration__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__fini(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__RadarConfiguration__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence *
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array = (radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__destroy(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__fini(array);
  }
  free(array);
}
