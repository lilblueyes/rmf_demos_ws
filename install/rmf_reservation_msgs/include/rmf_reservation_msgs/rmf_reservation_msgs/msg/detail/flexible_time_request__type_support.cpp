// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_reservation_msgs/msg/detail/flexible_time_request__functions.h"
#include "rmf_reservation_msgs/msg/detail/flexible_time_request__struct.hpp"
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

void FlexibleTimeRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_reservation_msgs::msg::FlexibleTimeRequest(_init);
}

void FlexibleTimeRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_reservation_msgs::msg::FlexibleTimeRequest *>(message_memory);
  typed_message->~FlexibleTimeRequest();
}

size_t size_function__FlexibleTimeRequest__alternatives(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FlexibleTimeRequest__alternatives(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt> *>(untyped_member);
  return &member[index];
}

void * get_function__FlexibleTimeRequest__alternatives(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt> *>(untyped_member);
  return &member[index];
}

void fetch_function__FlexibleTimeRequest__alternatives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_reservation_msgs::msg::FlexibleTimeReservationAlt *>(
    get_const_function__FlexibleTimeRequest__alternatives(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt *>(untyped_value);
  value = item;
}

void assign_function__FlexibleTimeRequest__alternatives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt *>(
    get_function__FlexibleTimeRequest__alternatives(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_reservation_msgs::msg::FlexibleTimeReservationAlt *>(untyped_value);
  item = value;
}

void resize_function__FlexibleTimeRequest__alternatives(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FlexibleTimeRequest_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_reservation_msgs::msg::RequestHeader>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::FlexibleTimeRequest, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "alternatives",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_reservation_msgs::msg::FlexibleTimeRequest, alternatives),  // bytes offset in struct
    nullptr,  // default value
    size_function__FlexibleTimeRequest__alternatives,  // size() function pointer
    get_const_function__FlexibleTimeRequest__alternatives,  // get_const(index) function pointer
    get_function__FlexibleTimeRequest__alternatives,  // get(index) function pointer
    fetch_function__FlexibleTimeRequest__alternatives,  // fetch(index, &value) function pointer
    assign_function__FlexibleTimeRequest__alternatives,  // assign(index, value) function pointer
    resize_function__FlexibleTimeRequest__alternatives  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FlexibleTimeRequest_message_members = {
  "rmf_reservation_msgs::msg",  // message namespace
  "FlexibleTimeRequest",  // message name
  2,  // number of fields
  sizeof(rmf_reservation_msgs::msg::FlexibleTimeRequest),
  false,  // has_any_key_member_
  FlexibleTimeRequest_message_member_array,  // message members
  FlexibleTimeRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  FlexibleTimeRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FlexibleTimeRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FlexibleTimeRequest_message_members,
  get_message_typesupport_handle_function,
  &rmf_reservation_msgs__msg__FlexibleTimeRequest__get_type_hash,
  &rmf_reservation_msgs__msg__FlexibleTimeRequest__get_type_description,
  &rmf_reservation_msgs__msg__FlexibleTimeRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_reservation_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_reservation_msgs::msg::FlexibleTimeRequest>()
{
  return &::rmf_reservation_msgs::msg::rosidl_typesupport_introspection_cpp::FlexibleTimeRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_reservation_msgs, msg, FlexibleTimeRequest)() {
  return &::rmf_reservation_msgs::msg::rosidl_typesupport_introspection_cpp::FlexibleTimeRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
