// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/ReleaseRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/release_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/release_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_ReleaseRequest_location
{
public:
  explicit Init_ReleaseRequest_location(::rmf_reservation_msgs::msg::ReleaseRequest & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::ReleaseRequest location(::rmf_reservation_msgs::msg::ReleaseRequest::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ReleaseRequest msg_;
};

class Init_ReleaseRequest_ticket
{
public:
  Init_ReleaseRequest_ticket()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReleaseRequest_location ticket(::rmf_reservation_msgs::msg::ReleaseRequest::_ticket_type arg)
  {
    msg_.ticket = std::move(arg);
    return Init_ReleaseRequest_location(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::ReleaseRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::ReleaseRequest>()
{
  return rmf_reservation_msgs::msg::builder::Init_ReleaseRequest_ticket();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RELEASE_REQUEST__BUILDER_HPP_
