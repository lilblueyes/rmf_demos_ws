// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeDelay.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_traffic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ScheduleChangeDelay_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ScheduleChangeDelay(_init);
}

void ScheduleChangeDelay_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ScheduleChangeDelay *>(message_memory);
  typed_message->~ScheduleChangeDelay();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ScheduleChangeDelay_message_member_array[1] = {
  {
    "delay",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleChangeDelay, delay),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ScheduleChangeDelay_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ScheduleChangeDelay",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ScheduleChangeDelay),
  false,  // has_any_key_member_
  ScheduleChangeDelay_message_member_array,  // message members
  ScheduleChangeDelay_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleChangeDelay_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ScheduleChangeDelay_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ScheduleChangeDelay_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_hash,
  &rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_description,
  &rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleChangeDelay>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleChangeDelay_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ScheduleChangeDelay)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleChangeDelay_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
