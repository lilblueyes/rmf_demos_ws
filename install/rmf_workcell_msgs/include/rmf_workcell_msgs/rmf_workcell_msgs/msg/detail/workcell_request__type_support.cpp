// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_workcell_msgs:msg/WorkcellRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_workcell_msgs/msg/detail/workcell_request__functions.h"
#include "rmf_workcell_msgs/msg/detail/workcell_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_workcell_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WorkcellRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_workcell_msgs::msg::WorkcellRequest(_init);
}

void WorkcellRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_workcell_msgs::msg::WorkcellRequest *>(message_memory);
  typed_message->~WorkcellRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WorkcellRequest_message_member_array[3] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellRequest, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellRequest, request_guid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellRequest, target_guid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WorkcellRequest_message_members = {
  "rmf_workcell_msgs::msg",  // message namespace
  "WorkcellRequest",  // message name
  3,  // number of fields
  sizeof(rmf_workcell_msgs::msg::WorkcellRequest),
  false,  // has_any_key_member_
  WorkcellRequest_message_member_array,  // message members
  WorkcellRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  WorkcellRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WorkcellRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WorkcellRequest_message_members,
  get_message_typesupport_handle_function,
  &rmf_workcell_msgs__msg__WorkcellRequest__get_type_hash,
  &rmf_workcell_msgs__msg__WorkcellRequest__get_type_description,
  &rmf_workcell_msgs__msg__WorkcellRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_workcell_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_workcell_msgs::msg::WorkcellRequest>()
{
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::WorkcellRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_workcell_msgs, msg, WorkcellRequest)() {
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::WorkcellRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
