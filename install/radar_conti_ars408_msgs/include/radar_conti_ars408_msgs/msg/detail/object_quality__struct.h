// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_distlong_rms'
// Member 'obj_distlat_rms'
// Member 'obj_vrellong_rms'
// Member 'obj_vrellat_rms'
// Member 'obj_arellong_rms'
// Member 'obj_arellat_rms'
// Member 'obj_orientation_rms'
// Member 'obj_probofexist'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'obj_measstate'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/ObjectQuality in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ObjectQuality
{
  std_msgs__msg__Float64 obj_distlong_rms;
  std_msgs__msg__Float64 obj_distlat_rms;
  std_msgs__msg__Float64 obj_vrellong_rms;
  std_msgs__msg__Float64 obj_vrellat_rms;
  std_msgs__msg__Float64 obj_arellong_rms;
  std_msgs__msg__Float64 obj_arellat_rms;
  std_msgs__msg__Float64 obj_orientation_rms;
  std_msgs__msg__Float64 obj_probofexist;
  std_msgs__msg__String obj_measstate;
} radar_conti_ars408_msgs__msg__ObjectQuality;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectQuality.
typedef struct radar_conti_ars408_msgs__msg__ObjectQuality__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectQuality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectQuality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_H_
