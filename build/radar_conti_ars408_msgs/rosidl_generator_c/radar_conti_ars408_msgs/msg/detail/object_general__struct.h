// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_distlong'
// Member 'obj_distlat'
// Member 'obj_vrellong'
// Member 'obj_vrellat'
// Member 'obj_rcs'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'obj_dynprop'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/ObjectGeneral in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ObjectGeneral
{
  std_msgs__msg__Float64 obj_distlong;
  std_msgs__msg__Float64 obj_distlat;
  std_msgs__msg__Float64 obj_vrellong;
  std_msgs__msg__Float64 obj_vrellat;
  std_msgs__msg__String obj_dynprop;
  std_msgs__msg__Float64 obj_rcs;
} radar_conti_ars408_msgs__msg__ObjectGeneral;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectGeneral.
typedef struct radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectGeneral * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__STRUCT_H_
