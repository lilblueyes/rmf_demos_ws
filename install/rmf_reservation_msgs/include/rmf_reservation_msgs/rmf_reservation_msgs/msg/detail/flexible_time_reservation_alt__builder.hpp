// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeReservationAlt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/flexible_time_reservation_alt.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/flexible_time_reservation_alt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_FlexibleTimeReservationAlt_duration
{
public:
  explicit Init_FlexibleTimeReservationAlt_duration(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt duration(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt msg_;
};

class Init_FlexibleTimeReservationAlt_has_end
{
public:
  explicit Init_FlexibleTimeReservationAlt_has_end(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt & msg)
  : msg_(msg)
  {}
  Init_FlexibleTimeReservationAlt_duration has_end(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt::_has_end_type arg)
  {
    msg_.has_end = std::move(arg);
    return Init_FlexibleTimeReservationAlt_duration(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt msg_;
};

class Init_FlexibleTimeReservationAlt_start_time
{
public:
  explicit Init_FlexibleTimeReservationAlt_start_time(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt & msg)
  : msg_(msg)
  {}
  Init_FlexibleTimeReservationAlt_has_end start_time(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_FlexibleTimeReservationAlt_has_end(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt msg_;
};

class Init_FlexibleTimeReservationAlt_cost
{
public:
  explicit Init_FlexibleTimeReservationAlt_cost(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt & msg)
  : msg_(msg)
  {}
  Init_FlexibleTimeReservationAlt_start_time cost(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_FlexibleTimeReservationAlt_start_time(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt msg_;
};

class Init_FlexibleTimeReservationAlt_resource_name
{
public:
  Init_FlexibleTimeReservationAlt_resource_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlexibleTimeReservationAlt_cost resource_name(::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt::_resource_name_type arg)
  {
    msg_.resource_name = std::move(arg);
    return Init_FlexibleTimeReservationAlt_cost(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::FlexibleTimeReservationAlt>()
{
  return rmf_reservation_msgs::msg::builder::Init_FlexibleTimeReservationAlt_resource_name();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__BUILDER_HPP_
