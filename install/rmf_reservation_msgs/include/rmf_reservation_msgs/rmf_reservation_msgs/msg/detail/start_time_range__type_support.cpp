// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_reservation_msgs/msg/detail/start_time_range__functions.h"
#include "rmf_reservation_msgs/msg/detail/start_time_range__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_reservation_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StartTimeRange_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_reservation_msgs::msg::StartTimeRange(_init);
}

void StartTimeRange_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_reservation_msgs::msg::StartTimeRange *>(message_memory);
  typed_message->~StartTimeRange();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StartTimeRange_message_member_array[4] = {
  {
    "earliest_start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::StartTimeRange, earliest_start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_earliest_start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::StartTimeRange, has_earliest_start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "latest_start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::StartTimeRange, latest_start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_latest_start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::StartTimeRange, has_latest_start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StartTimeRange_message_members = {
  "rmf_reservation_msgs::msg",  // message namespace
  "StartTimeRange",  // message name
  4,  // number of fields
  sizeof(rmf_reservation_msgs::msg::StartTimeRange),
  false,  // has_any_key_member_
  StartTimeRange_message_member_array,  // message members
  StartTimeRange_init_function,  // function to initialize message memory (memory has to be allocated)
  StartTimeRange_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StartTimeRange_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartTimeRange_message_members,
  get_message_typesupport_handle_function,
  &rmf_reservation_msgs__msg__StartTimeRange__get_type_hash,
  &rmf_reservation_msgs__msg__StartTimeRange__get_type_description,
  &rmf_reservation_msgs__msg__StartTimeRange__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_reservation_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_reservation_msgs::msg::StartTimeRange>()
{
  return &::rmf_reservation_msgs::msg::rosidl_typesupport_introspection_cpp::StartTimeRange_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_reservation_msgs, msg, StartTimeRange)() {
  return &::rmf_reservation_msgs::msg::rosidl_typesupport_introspection_cpp::StartTimeRange_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
