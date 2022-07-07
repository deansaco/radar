// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_arellong'
// Member 'obj_arellat'
// Member 'obj_orientationangle'
// Member 'obj_length'
// Member 'obj_width'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'obj_class'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/ObjectExtended in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ObjectExtended
{
  std_msgs__msg__Float64 obj_arellong;
  std_msgs__msg__Float64 obj_arellat;
  std_msgs__msg__String obj_class;
  std_msgs__msg__Float64 obj_orientationangle;
  std_msgs__msg__Float64 obj_length;
  std_msgs__msg__Float64 obj_width;
} radar_conti_ars408_msgs__msg__ObjectExtended;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectExtended.
typedef struct radar_conti_ars408_msgs__msg__ObjectExtended__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_H_
