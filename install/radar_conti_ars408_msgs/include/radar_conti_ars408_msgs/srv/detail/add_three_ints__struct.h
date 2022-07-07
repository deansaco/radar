// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AddThreeInts in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} radar_conti_ars408_msgs__srv__AddThreeInts_Request;

// Struct for a sequence of radar_conti_ars408_msgs__srv__AddThreeInts_Request.
typedef struct radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence
{
  radar_conti_ars408_msgs__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddThreeInts in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__srv__AddThreeInts_Response
{
  int64_t sum;
} radar_conti_ars408_msgs__srv__AddThreeInts_Response;

// Struct for a sequence of radar_conti_ars408_msgs__srv__AddThreeInts_Response.
typedef struct radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence
{
  radar_conti_ars408_msgs__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
