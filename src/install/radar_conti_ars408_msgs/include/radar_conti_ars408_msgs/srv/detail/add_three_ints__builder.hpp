// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include "radar_conti_ars408_msgs/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace radar_conti_ars408_msgs
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::radar_conti_ars408_msgs::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::srv::AddThreeInts_Request c(::radar_conti_ars408_msgs::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::radar_conti_ars408_msgs::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::radar_conti_ars408_msgs::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::radar_conti_ars408_msgs::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::radar_conti_ars408_msgs::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::radar_conti_ars408_msgs::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::srv::AddThreeInts_Request>()
{
  return radar_conti_ars408_msgs::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace radar_conti_ars408_msgs


namespace radar_conti_ars408_msgs
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::radar_conti_ars408_msgs::srv::AddThreeInts_Response sum(::radar_conti_ars408_msgs::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::srv::AddThreeInts_Response>()
{
  return radar_conti_ars408_msgs::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
