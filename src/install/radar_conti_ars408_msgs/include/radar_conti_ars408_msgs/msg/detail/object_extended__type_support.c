// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/object_extended__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/object_extended__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.h"


// Include directives for member types
// Member `obj_arellong`
// Member `obj_arellat`
// Member `obj_orientationangle`
// Member `obj_length`
// Member `obj_width`
#include "std_msgs/msg/float64.h"
// Member `obj_arellong`
// Member `obj_arellat`
// Member `obj_orientationangle`
// Member `obj_length`
// Member `obj_width`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"
// Member `obj_class`
#include "std_msgs/msg/int32.h"
// Member `obj_class`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__ObjectExtended__init(message_memory);
}

void ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__ObjectExtended__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[6] = {
  {
    "obj_arellong",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectExtended, obj_arellong),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_arellat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectExtended, obj_arellat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectExtended, obj_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_orientationangle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectExtended, obj_orientationangle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectExtended, obj_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectExtended, obj_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "ObjectExtended",  // message name
  6,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__ObjectExtended),
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array,  // message members
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_type_support_handle = {
  0,
  &ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ObjectExtended)() {
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_type_support_handle.typesupport_identifier) {
    ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectExtended__rosidl_typesupport_introspection_c__ObjectExtended_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
