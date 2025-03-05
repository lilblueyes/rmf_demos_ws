// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/FixedTimeReservationAlt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/fixed_time_reservation_alt.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FIXED_TIME_RESERVATION_ALT__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FIXED_TIME_RESERVATION_ALT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/fixed_time_reservation_alt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedTimeReservationAlt_duration
{
public:
  explicit Init_FixedTimeReservationAlt_duration(::rmf_reservation_msgs::msg::FixedTimeReservationAlt & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::FixedTimeReservationAlt duration(::rmf_reservation_msgs::msg::FixedTimeReservationAlt::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FixedTimeReservationAlt msg_;
};

class Init_FixedTimeReservationAlt_has_end
{
public:
  explicit Init_FixedTimeReservationAlt_has_end(::rmf_reservation_msgs::msg::FixedTimeReservationAlt & msg)
  : msg_(msg)
  {}
  Init_FixedTimeReservationAlt_duration has_end(::rmf_reservation_msgs::msg::FixedTimeReservationAlt::_has_end_type arg)
  {
    msg_.has_end = std::move(arg);
    return Init_FixedTimeReservationAlt_duration(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FixedTimeReservationAlt msg_;
};

class Init_FixedTimeReservationAlt_start_time
{
public:
  explicit Init_FixedTimeReservationAlt_start_time(::rmf_reservation_msgs::msg::FixedTimeReservationAlt & msg)
  : msg_(msg)
  {}
  Init_FixedTimeReservationAlt_has_end start_time(::rmf_reservation_msgs::msg::FixedTimeReservationAlt::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_FixedTimeReservationAlt_has_end(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FixedTimeReservationAlt msg_;
};

class Init_FixedTimeReservationAlt_cost
{
public:
  explicit Init_FixedTimeReservationAlt_cost(::rmf_reservation_msgs::msg::FixedTimeReservationAlt & msg)
  : msg_(msg)
  {}
  Init_FixedTimeReservationAlt_start_time cost(::rmf_reservation_msgs::msg::FixedTimeReservationAlt::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_FixedTimeReservationAlt_start_time(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FixedTimeReservationAlt msg_;
};

class Init_FixedTimeReservationAlt_resource_name
{
public:
  Init_FixedTimeReservationAlt_resource_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedTimeReservationAlt_cost resource_name(::rmf_reservation_msgs::msg::FixedTimeReservationAlt::_resource_name_type arg)
  {
    msg_.resource_name = std::move(arg);
    return Init_FixedTimeReservationAlt_cost(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FixedTimeReservationAlt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::FixedTimeReservationAlt>()
{
  return rmf_reservation_msgs::msg::builder::Init_FixedTimeReservationAlt_resource_name();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FIXED_TIME_RESERVATION_ALT__BUILDER_HPP_
