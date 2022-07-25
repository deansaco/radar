// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from can_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__FRAME__FUNCTIONS_H_
#define CAN_MSGS__MSG__DETAIL__FRAME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "can_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "can_msgs/msg/detail/frame__struct.h"

/// Initialize msg/Frame message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * can_msgs__msg__Frame
 * )) before or use
 * can_msgs__msg__Frame__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__Frame__init(can_msgs__msg__Frame * msg);

/// Finalize msg/Frame message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__Frame__fini(can_msgs__msg__Frame * msg);

/// Create msg/Frame message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * can_msgs__msg__Frame__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
can_msgs__msg__Frame *
can_msgs__msg__Frame__create();

/// Destroy msg/Frame message.
/**
 * It calls
 * can_msgs__msg__Frame__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__Frame__destroy(can_msgs__msg__Frame * msg);


/// Initialize array of msg/Frame messages.
/**
 * It allocates the memory for the number of elements and calls
 * can_msgs__msg__Frame__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__Frame__Sequence__init(can_msgs__msg__Frame__Sequence * array, size_t size);

/// Finalize array of msg/Frame messages.
/**
 * It calls
 * can_msgs__msg__Frame__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__Frame__Sequence__fini(can_msgs__msg__Frame__Sequence * array);

/// Create array of msg/Frame messages.
/**
 * It allocates the memory for the array and calls
 * can_msgs__msg__Frame__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
can_msgs__msg__Frame__Sequence *
can_msgs__msg__Frame__Sequence__create(size_t size);

/// Destroy array of msg/Frame messages.
/**
 * It calls
 * can_msgs__msg__Frame__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__Frame__Sequence__destroy(can_msgs__msg__Frame__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CAN_MSGS__MSG__DETAIL__FRAME__FUNCTIONS_H_
