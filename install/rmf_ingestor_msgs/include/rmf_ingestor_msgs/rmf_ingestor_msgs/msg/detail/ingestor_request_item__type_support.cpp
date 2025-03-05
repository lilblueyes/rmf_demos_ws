// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_ingestor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IngestorRequestItem_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_ingestor_msgs::msg::IngestorRequestItem(_init);
}

void IngestorRequestItem_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_ingestor_msgs::msg::IngestorRequestItem *>(message_memory);
  typed_message->~IngestorRequestItem();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IngestorRequestItem_message_member_array[3] = {
  {
    "type_guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequestItem, type_guid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quantity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequestItem, quantity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "compartment_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequestItem, compartment_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IngestorRequestItem_message_members = {
  "rmf_ingestor_msgs::msg",  // message namespace
  "IngestorRequestItem",  // message name
  3,  // number of fields
  sizeof(rmf_ingestor_msgs::msg::IngestorRequestItem),
  false,  // has_any_key_member_
  IngestorRequestItem_message_member_array,  // message members
  IngestorRequestItem_init_function,  // function to initialize message memory (memory has to be allocated)
  IngestorRequestItem_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IngestorRequestItem_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IngestorRequestItem_message_members,
  get_message_typesupport_handle_function,
  &rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_hash,
  &rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description,
  &rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_ingestor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_ingestor_msgs::msg::IngestorRequestItem>()
{
  return &::rmf_ingestor_msgs::msg::rosidl_typesupport_introspection_cpp::IngestorRequestItem_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_ingestor_msgs, msg, IngestorRequestItem)() {
  return &::rmf_ingestor_msgs::msg::rosidl_typesupport_introspection_cpp::IngestorRequestItem_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
