// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/radar_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radarstate_nvmwritestatus`
// Member `radarstate_nvmreadstatus`
// Member `radarstate_maxdistancecfg`
// Member `radarstate_persistent_error`
// Member `radarstate_interference`
// Member `radarstate_temperature_error`
// Member `radarstate_temporary_error`
// Member `radarstate_voltage_error`
// Member `radarstate_radarpowercfg`
// Member `radarstate_sortindex`
// Member `radarstate_sensorid`
// Member `radarstate_motionrxstate`
// Member `radarstate_sendextinfocfg`
// Member `radarstate_sendqualitycfg`
// Member `radarstate_outputtypecfg`
// Member `radarstate_ctrlrelaycfg`
// Member `radarstate_rcs_threshold`
#include "std_msgs/msg/detail/u_int8__functions.h"

bool
radar_conti_ars408_msgs__msg__RadarState__init(radar_conti_ars408_msgs__msg__RadarState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_nvmwritestatus
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_nvmwritestatus)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_nvmreadstatus
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_nvmreadstatus)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_maxdistancecfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_maxdistancecfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_persistent_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_persistent_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_interference
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_interference)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_temperature_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_temperature_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_temporary_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_temporary_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_voltage_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_voltage_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_radarpowercfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_radarpowercfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sortindex
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sortindex)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sensorid
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sensorid)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_motionrxstate
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_motionrxstate)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sendextinfocfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sendextinfocfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sendqualitycfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sendqualitycfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_outputtypecfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_outputtypecfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_ctrlrelaycfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_ctrlrelaycfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_rcs_threshold
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_rcs_threshold)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__RadarState__fini(radar_conti_ars408_msgs__msg__RadarState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radarstate_nvmwritestatus
  std_msgs__msg__UInt8__fini(&msg->radarstate_nvmwritestatus);
  // radarstate_nvmreadstatus
  std_msgs__msg__UInt8__fini(&msg->radarstate_nvmreadstatus);
  // radarstate_maxdistancecfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_maxdistancecfg);
  // radarstate_persistent_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_persistent_error);
  // radarstate_interference
  std_msgs__msg__UInt8__fini(&msg->radarstate_interference);
  // radarstate_temperature_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_temperature_error);
  // radarstate_temporary_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_temporary_error);
  // radarstate_voltage_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_voltage_error);
  // radarstate_radarpowercfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_radarpowercfg);
  // radarstate_sortindex
  std_msgs__msg__UInt8__fini(&msg->radarstate_sortindex);
  // radarstate_sensorid
  std_msgs__msg__UInt8__fini(&msg->radarstate_sensorid);
  // radarstate_motionrxstate
  std_msgs__msg__UInt8__fini(&msg->radarstate_motionrxstate);
  // radarstate_sendextinfocfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_sendextinfocfg);
  // radarstate_sendqualitycfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_sendqualitycfg);
  // radarstate_outputtypecfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_outputtypecfg);
  // radarstate_ctrlrelaycfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_ctrlrelaycfg);
  // radarstate_rcs_threshold
  std_msgs__msg__UInt8__fini(&msg->radarstate_rcs_threshold);
}

radar_conti_ars408_msgs__msg__RadarState *
radar_conti_ars408_msgs__msg__RadarState__create()
{
  radar_conti_ars408_msgs__msg__RadarState * msg = (radar_conti_ars408_msgs__msg__RadarState *)malloc(sizeof(radar_conti_ars408_msgs__msg__RadarState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__RadarState));
  bool success = radar_conti_ars408_msgs__msg__RadarState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__RadarState__destroy(radar_conti_ars408_msgs__msg__RadarState * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__RadarState__Sequence__init(radar_conti_ars408_msgs__msg__RadarState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__RadarState * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__RadarState *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__RadarState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__RadarState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__RadarState__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__RadarState__Sequence__fini(radar_conti_ars408_msgs__msg__RadarState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__RadarState__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__RadarState__Sequence *
radar_conti_ars408_msgs__msg__RadarState__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__RadarState__Sequence * array = (radar_conti_ars408_msgs__msg__RadarState__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__RadarState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__RadarState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__RadarState__Sequence__destroy(radar_conti_ars408_msgs__msg__RadarState__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__RadarState__Sequence__fini(array);
  }
  free(array);
}
