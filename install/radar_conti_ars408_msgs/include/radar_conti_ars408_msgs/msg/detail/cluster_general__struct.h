// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cluster_distlong'
// Member 'cluster_distlat'
// Member 'cluster_vrellong'
// Member 'cluster_vrellat'
// Member 'cluster_rcs'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'cluster_dynprop'
#include "std_msgs/msg/detail/int32__struct.h"

// Struct defined in msg/ClusterGeneral in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ClusterGeneral
{
  std_msgs__msg__Float64 cluster_distlong;
  std_msgs__msg__Float64 cluster_distlat;
  std_msgs__msg__Float64 cluster_vrellong;
  std_msgs__msg__Float64 cluster_vrellat;
  std_msgs__msg__Int32 cluster_dynprop;
  std_msgs__msg__Float64 cluster_rcs;
} radar_conti_ars408_msgs__msg__ClusterGeneral;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ClusterGeneral.
typedef struct radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence
{
  radar_conti_ars408_msgs__msg__ClusterGeneral * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_H_
