// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/ApiRequest.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/api_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__ApiRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0xdd, 0x8f, 0x06, 0xd5, 0x43, 0x87, 0xa6,
      0x7b, 0xad, 0x68, 0x64, 0x0b, 0x88, 0x15, 0x00,
      0xf2, 0x55, 0x8b, 0xc8, 0x1a, 0x5b, 0x71, 0x21,
      0xa9, 0x15, 0x1b, 0x5b, 0x21, 0xb2, 0x1c, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__ApiRequest__TYPE_NAME[] = "rmf_task_msgs/msg/ApiRequest";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__ApiRequest__FIELD_NAME__json_msg[] = "json_msg";
static char rmf_task_msgs__msg__ApiRequest__FIELD_NAME__request_id[] = "request_id";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__ApiRequest__FIELDS[] = {
  {
    {rmf_task_msgs__msg__ApiRequest__FIELD_NAME__json_msg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__ApiRequest__FIELD_NAME__request_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__ApiRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__ApiRequest__TYPE_NAME, 28, 28},
      {rmf_task_msgs__msg__ApiRequest__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The JSON message that represents the request\n"
  "string json_msg\n"
  "\n"
  "# The unique ID assigned to this request\n"
  "string request_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__ApiRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__ApiRequest__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 124, 124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__ApiRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__ApiRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
