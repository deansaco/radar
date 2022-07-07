// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/cluster__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.h"


// Include directives for member types
// Member `cluster_id`
#include "std_msgs/msg/int32.h"
// Member `cluster_id`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"
// Member `cluster_general`
#include "radar_conti_ars408_msgs/msg/cluster_general.h"
// Member `cluster_general`
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__rosidl_typesupport_introspection_c.h"
// Member `cluster_quality`
#include "radar_conti_ars408_msgs/msg/cluster_quality.h"
// Member `cluster_quality`
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Cluster__rosidl_typesupport_introspection_c__Cluster_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__Cluster__init(message_memory);
}

void Cluster__rosidl_typesupport_introspection_c__Cluster_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__Cluster__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array[3] = {
  {
    "cluster_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__Cluster, cluster_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_general",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__Cluster, cluster_general),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__Cluster, cluster_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Cluster__rosidl_typesupport_introspection_c__Cluster_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "Cluster",  // message name
  3,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__Cluster),
  Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array,  // message members
  Cluster__rosidl_typesupport_introspection_c__Cluster_init_function,  // function to initialize message memory (memory has to be allocated)
  Cluster__rosidl_typesupport_introspection_c__Cluster_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle = {
  0,
  &Cluster__rosidl_typesupport_introspection_c__Cluster_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, Cluster)() {
  Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ClusterGeneral)();
  Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ClusterQuality)();
  if (!Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle.typesupport_identifier) {
    Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
