// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/float64__functions.h"  // cluster_distlat_rms, cluster_distlong_rms, cluster_vrellat_rms, cluster_vrellong_rms
#include "std_msgs/msg/detail/string__functions.h"  // cluster_ambigstate, cluster_invalidstate, cluster_pdh0

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t get_serialized_size_std_msgs__msg__Float64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t max_serialized_size_std_msgs__msg__Float64(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _ClusterQuality__ros_msg_type = radar_conti_ars408_msgs__msg__ClusterQuality;

static bool _ClusterQuality__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClusterQuality__ros_msg_type * ros_message = static_cast<const _ClusterQuality__ros_msg_type *>(untyped_ros_message);
  // Field name: cluster_distlong_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_distlong_rms, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_distlat_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_distlat_rms, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_vrellong_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_vrellong_rms, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_vrellat_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_vrellat_rms, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_pdh0
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_pdh0, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_invalidstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_invalidstate, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_ambigstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_ambigstate, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ClusterQuality__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClusterQuality__ros_msg_type * ros_message = static_cast<_ClusterQuality__ros_msg_type *>(untyped_ros_message);
  // Field name: cluster_distlong_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_distlong_rms))
    {
      return false;
    }
  }

  // Field name: cluster_distlat_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_distlat_rms))
    {
      return false;
    }
  }

  // Field name: cluster_vrellong_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_vrellong_rms))
    {
      return false;
    }
  }

  // Field name: cluster_vrellat_rms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_vrellat_rms))
    {
      return false;
    }
  }

  // Field name: cluster_pdh0
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_pdh0))
    {
      return false;
    }
  }

  // Field name: cluster_invalidstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_invalidstate))
    {
      return false;
    }
  }

  // Field name: cluster_ambigstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_ambigstate))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t get_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClusterQuality__ros_msg_type * ros_message = static_cast<const _ClusterQuality__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cluster_distlong_rms

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->cluster_distlong_rms), current_alignment);
  // field.name cluster_distlat_rms

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->cluster_distlat_rms), current_alignment);
  // field.name cluster_vrellong_rms

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->cluster_vrellong_rms), current_alignment);
  // field.name cluster_vrellat_rms

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->cluster_vrellat_rms), current_alignment);
  // field.name cluster_pdh0

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->cluster_pdh0), current_alignment);
  // field.name cluster_invalidstate

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->cluster_invalidstate), current_alignment);
  // field.name cluster_ambigstate

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->cluster_ambigstate), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ClusterQuality__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t max_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cluster_distlong_rms
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_distlat_rms
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_vrellong_rms
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_vrellat_rms
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_pdh0
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_invalidstate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_ambigstate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ClusterQuality__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClusterQuality = {
  "radar_conti_ars408_msgs::msg",
  "ClusterQuality",
  _ClusterQuality__cdr_serialize,
  _ClusterQuality__cdr_deserialize,
  _ClusterQuality__get_serialized_size,
  _ClusterQuality__max_serialized_size
};

static rosidl_message_type_support_t _ClusterQuality__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClusterQuality,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterQuality)() {
  return &_ClusterQuality__type_support;
}

#if defined(__cplusplus)
}
#endif
