// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_conti_ars408_msgs/msg/detail/object_status__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/object_status__functions.h"
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

#include "std_msgs/msg/detail/int32__functions.h"  // obj_interfaceversion, obj_meascounter, obj_nofobjects

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t get_serialized_size_std_msgs__msg__Int32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t max_serialized_size_std_msgs__msg__Int32(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32)();


using _ObjectStatus__ros_msg_type = radar_conti_ars408_msgs__msg__ObjectStatus;

static bool _ObjectStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectStatus__ros_msg_type * ros_message = static_cast<const _ObjectStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: obj_nofobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obj_nofobjects, cdr))
    {
      return false;
    }
  }

  // Field name: obj_meascounter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obj_meascounter, cdr))
    {
      return false;
    }
  }

  // Field name: obj_interfaceversion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obj_interfaceversion, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ObjectStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectStatus__ros_msg_type * ros_message = static_cast<_ObjectStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: obj_nofobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obj_nofobjects))
    {
      return false;
    }
  }

  // Field name: obj_meascounter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obj_meascounter))
    {
      return false;
    }
  }

  // Field name: obj_interfaceversion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obj_interfaceversion))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t get_serialized_size_radar_conti_ars408_msgs__msg__ObjectStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectStatus__ros_msg_type * ros_message = static_cast<const _ObjectStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name obj_nofobjects

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->obj_nofobjects), current_alignment);
  // field.name obj_meascounter

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->obj_meascounter), current_alignment);
  // field.name obj_interfaceversion

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->obj_interfaceversion), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_conti_ars408_msgs__msg__ObjectStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t max_serialized_size_radar_conti_ars408_msgs__msg__ObjectStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: obj_nofobjects
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int32(
        full_bounded, current_alignment);
    }
  }
  // member: obj_meascounter
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int32(
        full_bounded, current_alignment);
    }
  }
  // member: obj_interfaceversion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int32(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_radar_conti_ars408_msgs__msg__ObjectStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectStatus = {
  "radar_conti_ars408_msgs::msg",
  "ObjectStatus",
  _ObjectStatus__cdr_serialize,
  _ObjectStatus__cdr_deserialize,
  _ObjectStatus__get_serialized_size,
  _ObjectStatus__max_serialized_size
};

static rosidl_message_type_support_t _ObjectStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ObjectStatus)() {
  return &_ObjectStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
