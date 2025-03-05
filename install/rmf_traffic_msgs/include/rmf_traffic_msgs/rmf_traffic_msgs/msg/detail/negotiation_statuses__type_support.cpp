// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/NegotiationStatuses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_statuses__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_statuses__struct.hpp"
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

void NegotiationStatuses_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::NegotiationStatuses(_init);
}

void NegotiationStatuses_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::NegotiationStatuses *>(message_memory);
  typed_message->~NegotiationStatuses();
}

size_t size_function__NegotiationStatuses__negotiations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationStatuses__negotiations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationStatuses__negotiations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationStatuses__negotiations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationStatus *>(
    get_const_function__NegotiationStatuses__negotiations(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationStatus *>(untyped_value);
  value = item;
}

void assign_function__NegotiationStatuses__negotiations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationStatus *>(
    get_function__NegotiationStatuses__negotiations(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationStatus *>(untyped_value);
  item = value;
}

void resize_function__NegotiationStatuses__negotiations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NegotiationStatuses_message_member_array[1] = {
  {
    "negotiations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationStatus>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationStatuses, negotiations),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationStatuses__negotiations,  // size() function pointer
    get_const_function__NegotiationStatuses__negotiations,  // get_const(index) function pointer
    get_function__NegotiationStatuses__negotiations,  // get(index) function pointer
    fetch_function__NegotiationStatuses__negotiations,  // fetch(index, &value) function pointer
    assign_function__NegotiationStatuses__negotiations,  // assign(index, value) function pointer
    resize_function__NegotiationStatuses__negotiations  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NegotiationStatuses_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "NegotiationStatuses",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs::msg::NegotiationStatuses),
  false,  // has_any_key_member_
  NegotiationStatuses_message_member_array,  // message members
  NegotiationStatuses_init_function,  // function to initialize message memory (memory has to be allocated)
  NegotiationStatuses_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NegotiationStatuses_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NegotiationStatuses_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__NegotiationStatuses__get_type_hash,
  &rmf_traffic_msgs__msg__NegotiationStatuses__get_type_description,
  &rmf_traffic_msgs__msg__NegotiationStatuses__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationStatuses>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationStatuses_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, NegotiationStatuses)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationStatuses_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
