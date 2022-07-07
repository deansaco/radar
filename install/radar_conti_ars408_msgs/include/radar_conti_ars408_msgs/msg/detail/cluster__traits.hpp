// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'cluster_id'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'cluster_general'
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__traits.hpp"
// Member 'cluster_quality'
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::Cluster>()
{
  return "radar_conti_ars408_msgs::msg::Cluster";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::Cluster>()
{
  return "radar_conti_ars408_msgs/msg/Cluster";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::Cluster>
  : std::integral_constant<bool, has_fixed_size<radar_conti_ars408_msgs::msg::ClusterGeneral>::value && has_fixed_size<radar_conti_ars408_msgs::msg::ClusterQuality>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::Cluster>
  : std::integral_constant<bool, has_bounded_size<radar_conti_ars408_msgs::msg::ClusterGeneral>::value && has_bounded_size<radar_conti_ars408_msgs::msg::ClusterQuality>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::Cluster>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_
