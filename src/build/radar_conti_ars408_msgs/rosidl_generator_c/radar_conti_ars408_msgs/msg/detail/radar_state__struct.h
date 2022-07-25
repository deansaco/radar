// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'radarstate_nvmwritestatus'
// Member 'radarstate_nvmreadstatus'
// Member 'radarstate_maxdistancecfg'
// Member 'radarstate_persistent_error'
// Member 'radarstate_interference'
// Member 'radarstate_temperature_error'
// Member 'radarstate_temporary_error'
// Member 'radarstate_voltage_error'
// Member 'radarstate_radarpowercfg'
// Member 'radarstate_sortindex'
// Member 'radarstate_sensorid'
// Member 'radarstate_motionrxstate'
// Member 'radarstate_sendextinfocfg'
// Member 'radarstate_sendqualitycfg'
// Member 'radarstate_outputtypecfg'
// Member 'radarstate_ctrlrelaycfg'
// Member 'radarstate_rcs_threshold'
#include "std_msgs/msg/detail/u_int8__struct.h"

// Struct defined in msg/RadarState in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__RadarState
{
  std_msgs__msg__Header header;
  std_msgs__msg__UInt8 radarstate_nvmwritestatus;
  std_msgs__msg__UInt8 radarstate_nvmreadstatus;
  std_msgs__msg__UInt8 radarstate_maxdistancecfg;
  std_msgs__msg__UInt8 radarstate_persistent_error;
  std_msgs__msg__UInt8 radarstate_interference;
  std_msgs__msg__UInt8 radarstate_temperature_error;
  std_msgs__msg__UInt8 radarstate_temporary_error;
  std_msgs__msg__UInt8 radarstate_voltage_error;
  std_msgs__msg__UInt8 radarstate_radarpowercfg;
  std_msgs__msg__UInt8 radarstate_sortindex;
  std_msgs__msg__UInt8 radarstate_sensorid;
  std_msgs__msg__UInt8 radarstate_motionrxstate;
  std_msgs__msg__UInt8 radarstate_sendextinfocfg;
  std_msgs__msg__UInt8 radarstate_sendqualitycfg;
  std_msgs__msg__UInt8 radarstate_outputtypecfg;
  std_msgs__msg__UInt8 radarstate_ctrlrelaycfg;
  std_msgs__msg__UInt8 radarstate_rcs_threshold;
} radar_conti_ars408_msgs__msg__RadarState;

// Struct for a sequence of radar_conti_ars408_msgs__msg__RadarState.
typedef struct radar_conti_ars408_msgs__msg__RadarState__Sequence
{
  radar_conti_ars408_msgs__msg__RadarState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__RadarState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__STRUCT_H_
