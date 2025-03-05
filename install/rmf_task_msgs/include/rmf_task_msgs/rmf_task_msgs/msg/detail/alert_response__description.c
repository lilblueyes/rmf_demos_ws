// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/AlertResponse.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/alert_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__AlertResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0xc3, 0x2d, 0x00, 0x21, 0x2e, 0x1a, 0xba,
      0x7b, 0x73, 0x47, 0x56, 0x75, 0x81, 0x71, 0x5a,
      0xd3, 0xca, 0xc6, 0xe9, 0x1f, 0xa0, 0x7a, 0xf2,
      0xee, 0xdb, 0x79, 0x0a, 0xdd, 0x95, 0xe7, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__AlertResponse__TYPE_NAME[] = "rmf_task_msgs/msg/AlertResponse";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__AlertResponse__FIELD_NAME__id[] = "id";
static char rmf_task_msgs__msg__AlertResponse__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__AlertResponse__FIELDS[] = {
  {
    {rmf_task_msgs__msg__AlertResponse__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__AlertResponse__FIELD_NAME__response, 8, 8},
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
rmf_task_msgs__msg__AlertResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__AlertResponse__TYPE_NAME, 31, 31},
      {rmf_task_msgs__msg__AlertResponse__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The unique ID of the Alert this response is for\n"
  "string id\n"
  "\n"
  "# This response must be one of the available options\n"
  "# in the Alert.\n"
  "string response";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__AlertResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__AlertResponse__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 146, 146},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__AlertResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__AlertResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
