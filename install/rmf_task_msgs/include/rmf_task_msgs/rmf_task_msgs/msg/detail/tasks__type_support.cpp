// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_task_msgs:msg/Tasks.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_task_msgs/msg/detail/tasks__functions.h"
#include "rmf_task_msgs/msg/detail/tasks__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_task_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Tasks_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_task_msgs::msg::Tasks(_init);
}

void Tasks_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_task_msgs::msg::Tasks *>(message_memory);
  typed_message->~Tasks();
}

size_t size_function__Tasks__tasks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_task_msgs::msg::TaskSummary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tasks__tasks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_task_msgs::msg::TaskSummary> *>(untyped_member);
  return &member[index];
}

void * get_function__Tasks__tasks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_task_msgs::msg::TaskSummary> *>(untyped_member);
  return &member[index];
}

void fetch_function__Tasks__tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_task_msgs::msg::TaskSummary *>(
    get_const_function__Tasks__tasks(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_task_msgs::msg::TaskSummary *>(untyped_value);
  value = item;
}

void assign_function__Tasks__tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_task_msgs::msg::TaskSummary *>(
    get_function__Tasks__tasks(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_task_msgs::msg::TaskSummary *>(untyped_value);
  item = value;
}

void resize_function__Tasks__tasks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_task_msgs::msg::TaskSummary> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Tasks_message_member_array[1] = {
  {
    "tasks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_task_msgs::msg::TaskSummary>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::Tasks, tasks),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tasks__tasks,  // size() function pointer
    get_const_function__Tasks__tasks,  // get_const(index) function pointer
    get_function__Tasks__tasks,  // get(index) function pointer
    fetch_function__Tasks__tasks,  // fetch(index, &value) function pointer
    assign_function__Tasks__tasks,  // assign(index, value) function pointer
    resize_function__Tasks__tasks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Tasks_message_members = {
  "rmf_task_msgs::msg",  // message namespace
  "Tasks",  // message name
  1,  // number of fields
  sizeof(rmf_task_msgs::msg::Tasks),
  false,  // has_any_key_member_
  Tasks_message_member_array,  // message members
  Tasks_init_function,  // function to initialize message memory (memory has to be allocated)
  Tasks_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Tasks_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tasks_message_members,
  get_message_typesupport_handle_function,
  &rmf_task_msgs__msg__Tasks__get_type_hash,
  &rmf_task_msgs__msg__Tasks__get_type_description,
  &rmf_task_msgs__msg__Tasks__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_task_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_task_msgs::msg::Tasks>()
{
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::Tasks_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_task_msgs, msg, Tasks)() {
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::Tasks_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
