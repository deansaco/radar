// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/FilterCfg.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/filter_cfg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `filtercfg_valid`
// Member `filtercfg_active`
// Member `filtercfg_index`
// Member `filtercfg_type`
// Member `filtercfg_min_nofobj`
// Member `filtercfg_min_distance`
// Member `filtercfg_min_azimuth`
// Member `filtercfg_min_vreloncome`
// Member `filtercfg_min_vreldepart`
// Member `filtercfg_min_rcs`
// Member `filtercfg_min_lifetime`
// Member `filtercfg_min_size`
// Member `filtercfg_min_probexists`
// Member `filtercfg_min_y`
// Member `filtercfg_min_x`
// Member `filtercfg_min_vyrightleft`
// Member `filtercfg_min_vxoncome`
// Member `filtercfg_min_vyleftright`
// Member `filtercfg_min_vxdepart`
// Member `filtercfg_min_object_class`
// Member `filtercfg_max_nofobj`
// Member `filtercfg_max_distance`
// Member `filtercfg_max_azimuth`
// Member `filtercfg_max_vreloncome`
// Member `filtercfg_max_vreldepart`
// Member `filtercfg_max_rcs`
// Member `filtercfg_max_lifetime`
// Member `filtercfg_max_size`
// Member `filtercfg_max_probexists`
// Member `filtercfg_max_y`
// Member `filtercfg_max_x`
// Member `filtercfg_max_vyrightleft`
// Member `filtercfg_max_vxoncome`
// Member `filtercfg_max_vyleftright`
// Member `filtercfg_max_vxdepart`
// Member `filtercfg_max_object_class`
#include "std_msgs/msg/detail/u_int8__functions.h"

bool
radar_conti_ars408_msgs__msg__FilterCfg__init(radar_conti_ars408_msgs__msg__FilterCfg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_valid
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_valid)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_active
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_active)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_index
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_index)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_type
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_type)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_nofobj
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_nofobj)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_distance
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_distance)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_azimuth
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_azimuth)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_vreloncome
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_vreloncome)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_vreldepart
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_vreldepart)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_rcs
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_rcs)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_lifetime
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_lifetime)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_size
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_size)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_probexists
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_probexists)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_y
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_y)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_x
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_x)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_vyrightleft
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_vyrightleft)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_vxoncome
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_vxoncome)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_vyleftright
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_vyleftright)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_vxdepart
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_vxdepart)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_min_object_class
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_min_object_class)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_nofobj
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_nofobj)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_distance
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_distance)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_azimuth
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_azimuth)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_vreloncome
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_vreloncome)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_vreldepart
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_vreldepart)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_rcs
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_rcs)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_lifetime
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_lifetime)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_size
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_size)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_probexists
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_probexists)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_y
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_y)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_x
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_x)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_vyrightleft
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_vyrightleft)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_vxoncome
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_vxoncome)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_vyleftright
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_vyleftright)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_vxdepart
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_vxdepart)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  // filtercfg_max_object_class
  if (!std_msgs__msg__UInt8__init(&msg->filtercfg_max_object_class)) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__FilterCfg__fini(radar_conti_ars408_msgs__msg__FilterCfg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // filtercfg_valid
  std_msgs__msg__UInt8__fini(&msg->filtercfg_valid);
  // filtercfg_active
  std_msgs__msg__UInt8__fini(&msg->filtercfg_active);
  // filtercfg_index
  std_msgs__msg__UInt8__fini(&msg->filtercfg_index);
  // filtercfg_type
  std_msgs__msg__UInt8__fini(&msg->filtercfg_type);
  // filtercfg_min_nofobj
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_nofobj);
  // filtercfg_min_distance
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_distance);
  // filtercfg_min_azimuth
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_azimuth);
  // filtercfg_min_vreloncome
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_vreloncome);
  // filtercfg_min_vreldepart
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_vreldepart);
  // filtercfg_min_rcs
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_rcs);
  // filtercfg_min_lifetime
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_lifetime);
  // filtercfg_min_size
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_size);
  // filtercfg_min_probexists
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_probexists);
  // filtercfg_min_y
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_y);
  // filtercfg_min_x
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_x);
  // filtercfg_min_vyrightleft
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_vyrightleft);
  // filtercfg_min_vxoncome
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_vxoncome);
  // filtercfg_min_vyleftright
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_vyleftright);
  // filtercfg_min_vxdepart
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_vxdepart);
  // filtercfg_min_object_class
  std_msgs__msg__UInt8__fini(&msg->filtercfg_min_object_class);
  // filtercfg_max_nofobj
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_nofobj);
  // filtercfg_max_distance
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_distance);
  // filtercfg_max_azimuth
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_azimuth);
  // filtercfg_max_vreloncome
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_vreloncome);
  // filtercfg_max_vreldepart
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_vreldepart);
  // filtercfg_max_rcs
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_rcs);
  // filtercfg_max_lifetime
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_lifetime);
  // filtercfg_max_size
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_size);
  // filtercfg_max_probexists
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_probexists);
  // filtercfg_max_y
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_y);
  // filtercfg_max_x
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_x);
  // filtercfg_max_vyrightleft
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_vyrightleft);
  // filtercfg_max_vxoncome
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_vxoncome);
  // filtercfg_max_vyleftright
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_vyleftright);
  // filtercfg_max_vxdepart
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_vxdepart);
  // filtercfg_max_object_class
  std_msgs__msg__UInt8__fini(&msg->filtercfg_max_object_class);
}

radar_conti_ars408_msgs__msg__FilterCfg *
radar_conti_ars408_msgs__msg__FilterCfg__create()
{
  radar_conti_ars408_msgs__msg__FilterCfg * msg = (radar_conti_ars408_msgs__msg__FilterCfg *)malloc(sizeof(radar_conti_ars408_msgs__msg__FilterCfg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__FilterCfg));
  bool success = radar_conti_ars408_msgs__msg__FilterCfg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__FilterCfg__destroy(radar_conti_ars408_msgs__msg__FilterCfg * msg)
{
  if (msg) {
    radar_conti_ars408_msgs__msg__FilterCfg__fini(msg);
  }
  free(msg);
}


bool
radar_conti_ars408_msgs__msg__FilterCfg__Sequence__init(radar_conti_ars408_msgs__msg__FilterCfg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  radar_conti_ars408_msgs__msg__FilterCfg * data = NULL;
  if (size) {
    data = (radar_conti_ars408_msgs__msg__FilterCfg *)calloc(size, sizeof(radar_conti_ars408_msgs__msg__FilterCfg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__FilterCfg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__FilterCfg__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__FilterCfg__Sequence__fini(radar_conti_ars408_msgs__msg__FilterCfg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_conti_ars408_msgs__msg__FilterCfg__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__FilterCfg__Sequence *
radar_conti_ars408_msgs__msg__FilterCfg__Sequence__create(size_t size)
{
  radar_conti_ars408_msgs__msg__FilterCfg__Sequence * array = (radar_conti_ars408_msgs__msg__FilterCfg__Sequence *)malloc(sizeof(radar_conti_ars408_msgs__msg__FilterCfg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__FilterCfg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__FilterCfg__Sequence__destroy(radar_conti_ars408_msgs__msg__FilterCfg__Sequence * array)
{
  if (array) {
    radar_conti_ars408_msgs__msg__FilterCfg__Sequence__fini(array);
  }
  free(array);
}
