// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_door_msgs:msg/DoorMode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"
#include "rmf_door_msgs/msg/detail/door_mode__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_door_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DoorMode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_door_msgs::msg::DoorMode(_init);
}

void DoorMode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_door_msgs::msg::DoorMode *>(message_memory);
  typed_message->~DoorMode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoorMode_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs::msg::DoorMode, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoorMode_message_members = {
  "rmf_door_msgs::msg",  // message namespace
  "DoorMode",  // message name
  1,  // number of fields
  sizeof(rmf_door_msgs::msg::DoorMode),
  false,  // has_any_key_member_
  DoorMode_message_member_array,  // message members
  DoorMode_init_function,  // function to initialize message memory (memory has to be allocated)
  DoorMode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoorMode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoorMode_message_members,
  get_message_typesupport_handle_function,
  &rmf_door_msgs__msg__DoorMode__get_type_hash,
  &rmf_door_msgs__msg__DoorMode__get_type_description,
  &rmf_door_msgs__msg__DoorMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_door_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_door_msgs::msg::DoorMode>()
{
  return &::rmf_door_msgs::msg::rosidl_typesupport_introspection_cpp::DoorMode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_door_msgs, msg, DoorMode)() {
  return &::rmf_door_msgs::msg::rosidl_typesupport_introspection_cpp::DoorMode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
