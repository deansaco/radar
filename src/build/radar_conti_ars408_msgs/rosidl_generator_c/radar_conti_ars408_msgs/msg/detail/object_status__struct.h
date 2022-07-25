// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_nofobjects'
// Member 'obj_meascounter'
// Member 'obj_interfaceversion'
#include "std_msgs/msg/detail/int32__struct.h"

// Struct defined in msg/ObjectStatus in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ObjectStatus
{
  std_msgs__msg__Int32 obj_nofobjects;
  std_msgs__msg__Int32 obj_meascounter;
  std_msgs__msg__Int32 obj_interfaceversion;
} radar_conti_ars408_msgs__msg__ObjectStatus;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectStatus.
typedef struct radar_conti_ars408_msgs__msg__ObjectStatus__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_
