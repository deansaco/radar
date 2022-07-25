// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/radar_configuration__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'radarcfg_storeinnvm_valid'
// Member 'radarcfg_sortindex_valid'
// Member 'radarcfg_sendextinfo_valid'
// Member 'radarcfg_sendquality_valid'
// Member 'radarcfg_outputtype_valid'
// Member 'radarcfg_radarpower_valid'
// Member 'radarcfg_sensorid_valid'
// Member 'radarcfg_maxdistance_valid'
// Member 'radarcfg_maxdistance'
// Member 'radarcfg_radarpower'
// Member 'radarcfg_outputtype'
// Member 'radarcfg_sensorid'
// Member 'radarcfg_storeinnvm'
// Member 'radarcfg_sortindex'
// Member 'radarcfg_sendextinfo'
// Member 'radarcfg_sendquality'
// Member 'radarcfg_ctrlrelay'
// Member 'radarcfg_ctrlrelay_valid'
// Member 'radarcfg_rcs_threshold'
// Member 'radarcfg_rcs_threshold_valid'
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::RadarConfiguration>()
{
  return "radar_conti_ars408_msgs::msg::RadarConfiguration";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::RadarConfiguration>()
{
  return "radar_conti_ars408_msgs/msg/RadarConfiguration";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::RadarConfiguration>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::RadarConfiguration>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::RadarConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__TRAITS_HPP_
