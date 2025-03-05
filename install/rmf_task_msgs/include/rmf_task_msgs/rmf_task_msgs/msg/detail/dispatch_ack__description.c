// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/dispatch_ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__DispatchAck__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0x3e, 0x4c, 0xb4, 0x33, 0x86, 0xbb, 0x08,
      0xc4, 0xcf, 0xad, 0x8b, 0xb3, 0xc5, 0x2b, 0x04,
      0x57, 0x3f, 0xf5, 0x73, 0x85, 0x4e, 0xf1, 0x86,
      0x60, 0x61, 0x4d, 0xa9, 0xe8, 0x8e, 0xc1, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__DispatchAck__TYPE_NAME[] = "rmf_task_msgs/msg/DispatchAck";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__DispatchAck__FIELD_NAME__dispatch_id[] = "dispatch_id";
static char rmf_task_msgs__msg__DispatchAck__FIELD_NAME__success[] = "success";
static char rmf_task_msgs__msg__DispatchAck__FIELD_NAME__errors[] = "errors";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__DispatchAck__FIELDS[] = {
  {
    {rmf_task_msgs__msg__DispatchAck__FIELD_NAME__dispatch_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchAck__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchAck__FIELD_NAME__errors, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__DispatchAck__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__DispatchAck__TYPE_NAME, 29, 29},
      {rmf_task_msgs__msg__DispatchAck__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is published by the fleet adapter in response to a\n"
  "# DispatchRequest message. It indicates whether the requested task addition or\n"
  "# cancellation was successful.\n"
  "\n"
  "# The ID of the DispatchRequest that is being responded to\n"
  "uint64 dispatch_id\n"
  "\n"
  "# True if the addition or cancellation operation was successful\n"
  "bool success\n"
  "\n"
  "string[] errors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__DispatchAck__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__DispatchAck__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 350, 350},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__DispatchAck__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__DispatchAck__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
