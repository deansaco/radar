// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__FUNCTIONS_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "radar_conti_ars408_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "radar_conti_ars408_msgs/msg/detail/cluster_general__struct.h"

/// Initialize msg/ClusterGeneral message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * radar_conti_ars408_msgs__msg__ClusterGeneral
 * )) before or use
 * radar_conti_ars408_msgs__msg__ClusterGeneral__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__init(radar_conti_ars408_msgs__msg__ClusterGeneral * msg);

/// Finalize msg/ClusterGeneral message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__fini(radar_conti_ars408_msgs__msg__ClusterGeneral * msg);

/// Create msg/ClusterGeneral message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
radar_conti_ars408_msgs__msg__ClusterGeneral *
radar_conti_ars408_msgs__msg__ClusterGeneral__create();

/// Destroy msg/ClusterGeneral message.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral * msg);


/// Initialize array of msg/ClusterGeneral messages.
/**
 * It allocates the memory for the number of elements and calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array, size_t size);

/// Finalize array of msg/ClusterGeneral messages.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array);

/// Create array of msg/ClusterGeneral messages.
/**
 * It allocates the memory for the array and calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence *
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__create(size_t size);

/// Destroy array of msg/ClusterGeneral messages.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__FUNCTIONS_H_
