// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/srv/detail/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
radar_conti_ars408_msgs__srv__AddThreeInts_Request__init(radar_conti_ars408_msgs__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Request__fini(radar_conti_ars408_msgs__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

radar_conti_ars408_msgs__srv__AddThreeInts_Request *
radar_conti_ars408_msgs__srv__AddThreeInts_Request__create()
{
  radar_conti_ars408_msgs__srv__AddThreeInts_Request * msg = (radar_conti_ars408_msgs__srv__AddThreeInts_Request *)malloc(sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Request));
  bool success = radar_conti_ars408_msgs__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Request__destroy(radar_conti_ars408_msgs__srv__AddThreeInts_Request * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__srv__AddThreeInts_Request__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence__init(radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__srv__AddThreeInts_Request * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__srv__AddThreeInts_Request *)calloc(size, sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__srv__AddThreeInts_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence__fini(radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__srv__AddThreeInts_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence *
radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence * array = (radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence__destroy(radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
radar_conti_ars408_msgs__srv__AddThreeInts_Response__init(radar_conti_ars408_msgs__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Response__fini(radar_conti_ars408_msgs__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

radar_conti_ars408_msgs__srv__AddThreeInts_Response *
radar_conti_ars408_msgs__srv__AddThreeInts_Response__create()
{
  radar_conti_ars408_msgs__srv__AddThreeInts_Response * msg = (radar_conti_ars408_msgs__srv__AddThreeInts_Response *)malloc(sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Response));
  bool success = radar_conti_ars408_msgs__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Response__destroy(radar_conti_ars408_msgs__srv__AddThreeInts_Response * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__srv__AddThreeInts_Response__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence__init(radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__srv__AddThreeInts_Response * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__srv__AddThreeInts_Response *)calloc(size, sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__srv__AddThreeInts_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence__fini(radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__srv__AddThreeInts_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence *
radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence * array = (radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence__destroy(radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  free(array);
}
