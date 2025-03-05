// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice

#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_reservation_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rmf_reservation_msgs/msg/detail/reservation_allocation__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rmf_reservation_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
cdr_serialize(
  const rmf_reservation_msgs::msg::ReservationAllocation & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmf_reservation_msgs::msg::ReservationAllocation & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
get_serialized_size(
  const rmf_reservation_msgs::msg::ReservationAllocation & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
max_serialized_size_ReservationAllocation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
cdr_serialize_key(
  const rmf_reservation_msgs::msg::ReservationAllocation & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
get_serialized_size_key(
  const rmf_reservation_msgs::msg::ReservationAllocation & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
max_serialized_size_key_ReservationAllocation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmf_reservation_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmf_reservation_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmf_reservation_msgs, msg, ReservationAllocation)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
