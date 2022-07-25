// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cluster_distlong_rms'
// Member 'cluster_distlat_rms'
// Member 'cluster_vrellong_rms'
// Member 'cluster_vrellat_rms'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'cluster_pdh0'
// Member 'cluster_invalidstate'
// Member 'cluster_ambigstate'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/ClusterQuality in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ClusterQuality
{
  std_msgs__msg__Float64 cluster_distlong_rms;
  std_msgs__msg__Float64 cluster_distlat_rms;
  std_msgs__msg__Float64 cluster_vrellong_rms;
  std_msgs__msg__Float64 cluster_vrellat_rms;
  std_msgs__msg__String cluster_pdh0;
  std_msgs__msg__String cluster_invalidstate;
  std_msgs__msg__String cluster_ambigstate;
} radar_conti_ars408_msgs__msg__ClusterQuality;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ClusterQuality.
typedef struct radar_conti_ars408_msgs__msg__ClusterQuality__Sequence
{
  radar_conti_ars408_msgs__msg__ClusterQuality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ClusterQuality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__STRUCT_H_
