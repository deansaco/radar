// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/object_list__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/object_list__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/object_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `object_count`
#include "std_msgs/msg/int32.h"
// Member `object_count`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "radar_conti_ars408_msgs/msg/object.h"
// Member `objects`
#include "radar_conti_ars408_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectList__rosidl_typesupport_introspection_c__ObjectList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__ObjectList__init(message_memory);
}

void ObjectList__rosidl_typesupport_introspection_c__ObjectList_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__ObjectList__fini(message_memory);
}

size_t ObjectList__rosidl_typesupport_introspection_c__size_function__Object__objects(
  const void * untyped_member)
{
  const radar_conti_ars408_msgs__msg__Object__Sequence * member =
    (const radar_conti_ars408_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * ObjectList__rosidl_typesupport_introspection_c__get_const_function__Object__objects(
  const void * untyped_member, size_t index)
{
  const radar_conti_ars408_msgs__msg__Object__Sequence * member =
    (const radar_conti_ars408_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ObjectList__rosidl_typesupport_introspection_c__get_function__Object__objects(
  void * untyped_member, size_t index)
{
  radar_conti_ars408_msgs__msg__Object__Sequence * member =
    (radar_conti_ars408_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ObjectList__rosidl_typesupport_introspection_c__resize_function__Object__objects(
  void * untyped_member, size_t size)
{
  radar_conti_ars408_msgs__msg__Object__Sequence * member =
    (radar_conti_ars408_msgs__msg__Object__Sequence *)(untyped_member);
  radar_conti_ars408_msgs__msg__Object__Sequence__fini(member);
  return radar_conti_ars408_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectList, object_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectList, objects),  // bytes offset in struct
    NULL,  // default value
    ObjectList__rosidl_typesupport_introspection_c__size_function__Object__objects,  // size() function pointer
    ObjectList__rosidl_typesupport_introspection_c__get_const_function__Object__objects,  // get_const(index) function pointer
    ObjectList__rosidl_typesupport_introspection_c__get_function__Object__objects,  // get(index) function pointer
    ObjectList__rosidl_typesupport_introspection_c__resize_function__Object__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "ObjectList",  // message name
  3,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__ObjectList),
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array,  // message members
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle = {
  0,
  &ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ObjectList)() {
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, Object)();
  if (!ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle.typesupport_identifier) {
    ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
