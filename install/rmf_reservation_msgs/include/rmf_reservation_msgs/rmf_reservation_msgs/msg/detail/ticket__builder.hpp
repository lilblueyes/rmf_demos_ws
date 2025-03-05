// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/Ticket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/ticket.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/ticket__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_Ticket_ticket_id
{
public:
  explicit Init_Ticket_ticket_id(::rmf_reservation_msgs::msg::Ticket & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::Ticket ticket_id(::rmf_reservation_msgs::msg::Ticket::_ticket_id_type arg)
  {
    msg_.ticket_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::Ticket msg_;
};

class Init_Ticket_header
{
public:
  Init_Ticket_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ticket_ticket_id header(::rmf_reservation_msgs::msg::Ticket::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ticket_ticket_id(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::Ticket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::Ticket>()
{
  return rmf_reservation_msgs::msg::builder::Init_Ticket_header();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__BUILDER_HPP_
