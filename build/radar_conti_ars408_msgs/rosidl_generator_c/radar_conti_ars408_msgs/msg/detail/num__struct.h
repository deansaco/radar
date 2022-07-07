// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Num in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__Num
{
  int64_t num;
} radar_conti_ars408_msgs__msg__Num;

// Struct for a sequence of radar_conti_ars408_msgs__msg__Num.
typedef struct radar_conti_ars408_msgs__msg__Num__Sequence
{
  radar_conti_ars408_msgs__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__STRUCT_H_
