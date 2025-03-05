// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/request_header.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/request_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_RequestHeader_request_id
{
public:
  explicit Init_RequestHeader_request_id(::rmf_reservation_msgs::msg::RequestHeader & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::RequestHeader request_id(::rmf_reservation_msgs::msg::RequestHeader::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::RequestHeader msg_;
};

class Init_RequestHeader_fleet_name
{
public:
  explicit Init_RequestHeader_fleet_name(::rmf_reservation_msgs::msg::RequestHeader & msg)
  : msg_(msg)
  {}
  Init_RequestHeader_request_id fleet_name(::rmf_reservation_msgs::msg::RequestHeader::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_RequestHeader_request_id(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::RequestHeader msg_;
};

class Init_RequestHeader_robot_name
{
public:
  Init_RequestHeader_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestHeader_fleet_name robot_name(::rmf_reservation_msgs::msg::RequestHeader::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_RequestHeader_fleet_name(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::RequestHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::RequestHeader>()
{
  return rmf_reservation_msgs::msg::builder::Init_RequestHeader_robot_name();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__BUILDER_HPP_
