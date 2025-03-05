// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/ApiResponse.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/api_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__ApiResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0xe0, 0xdb, 0xdc, 0x53, 0xee, 0x90, 0x3a,
      0x63, 0x52, 0x02, 0x0f, 0xcf, 0x2f, 0xbb, 0xc5,
      0x33, 0x1a, 0xee, 0x4d, 0x85, 0x48, 0x3b, 0x1a,
      0xc9, 0x6e, 0xac, 0x4c, 0x14, 0xe6, 0x9f, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__ApiResponse__TYPE_NAME[] = "rmf_task_msgs/msg/ApiResponse";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__ApiResponse__FIELD_NAME__type[] = "type";
static char rmf_task_msgs__msg__ApiResponse__FIELD_NAME__json_msg[] = "json_msg";
static char rmf_task_msgs__msg__ApiResponse__FIELD_NAME__request_id[] = "request_id";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__ApiResponse__FIELDS[] = {
  {
    {rmf_task_msgs__msg__ApiResponse__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__ApiResponse__FIELD_NAME__json_msg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__ApiResponse__FIELD_NAME__request_id, 10, 10},
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
rmf_task_msgs__msg__ApiResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__ApiResponse__TYPE_NAME, 29, 29},
      {rmf_task_msgs__msg__ApiResponse__FIELDS, 3, 3},
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
  "# This response type means the message was not initialized correctly and will\n"
  "# result in an error\n"
  "uint8 TYPE_UNINITIALIZED = 0\n"
  "\n"
  "# This response type means the request is being acknowledged which will grant it\n"
  "# some extra time before the API Node has its response timeout. This can be used\n"
  "# to extend the lifetime of a request which may take a long time to complete.\n"
  "# Each time an acknowledgment is sent the lifetime will be extended.\n"
  "uint8 TYPE_ACKNOWLEDGE = 1\n"
  "\n"
  "# This response type means this message is responding to the request and\n"
  "# therefore fulfilling the request.\n"
  "uint8 TYPE_RESPONDING = 2\n"
  "\n"
  "# The type of response this is: Acknowledging or Responding\n"
  "# (Uninitialized will result in the API Node issuing an error response)\n"
  "uint8 type\n"
  "\n"
  "# The JSON message that represents the response\n"
  "string json_msg\n"
  "\n"
  "# The unique ID of the request that this response is targeted at\n"
  "string request_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__ApiResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__ApiResponse__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 895, 895},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__ApiResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__ApiResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
