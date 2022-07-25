// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterStateCfg.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_CFG__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_CFG__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/filter_state_cfg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'filtercfg_valid'
// Member 'filtercfg_active'
// Member 'filtercfg_index'
// Member 'filtercfg_type'
// Member 'filtercfg_min_nofobj'
// Member 'filtercfg_min_distance'
// Member 'filtercfg_min_azimuth'
// Member 'filtercfg_min_vreloncome'
// Member 'filtercfg_min_vreldepart'
// Member 'filtercfg_min_rcs'
// Member 'filtercfg_min_lifetime'
// Member 'filtercfg_min_size'
// Member 'filtercfg_min_probexists'
// Member 'filtercfg_min_y'
// Member 'filtercfg_min_x'
// Member 'filtercfg_min_vyrightleft'
// Member 'filtercfg_min_vxoncome'
// Member 'filtercfg_min_vyleftright'
// Member 'filtercfg_min_vxdepart'
// Member 'filtercfg_min_object_class'
// Member 'filtercfg_max_nofobj'
// Member 'filtercfg_max_distance'
// Member 'filtercfg_max_azimuth'
// Member 'filtercfg_max_vreloncome'
// Member 'filtercfg_max_vreldepart'
// Member 'filtercfg_max_rcs'
// Member 'filtercfg_max_lifetime'
// Member 'filtercfg_max_size'
// Member 'filtercfg_max_probexists'
// Member 'filtercfg_max_y'
// Member 'filtercfg_max_x'
// Member 'filtercfg_max_vyrightleft'
// Member 'filtercfg_max_vxoncome'
// Member 'filtercfg_max_vyleftright'
// Member 'filtercfg_max_vxdepart'
// Member 'filtercfg_max_object_class'
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::FilterStateCfg>()
{
  return "radar_conti_ars408_msgs::msg::FilterStateCfg";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::FilterStateCfg>()
{
  return "radar_conti_ars408_msgs/msg/FilterStateCfg";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::FilterStateCfg>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::FilterStateCfg>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::FilterStateCfg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_CFG__TRAITS_HPP_
