// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__msg__Payload__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x73, 0x95, 0x52, 0xb9, 0x9a, 0xc5, 0xdc,
      0x0c, 0x69, 0xfb, 0x91, 0x96, 0xe9, 0xf8, 0xc0,
      0x27, 0x3a, 0x50, 0xb4, 0xdb, 0x65, 0x63, 0xf0,
      0xb4, 0x37, 0x47, 0xd1, 0x05, 0x6d, 0xc3, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_scheduler_msgs__msg__Payload__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Payload";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__msg__Payload__FIELD_NAME__type[] = "type";
static char rmf_scheduler_msgs__msg__Payload__FIELD_NAME__topic[] = "topic";
static char rmf_scheduler_msgs__msg__Payload__FIELD_NAME__message_type[] = "message_type";
static char rmf_scheduler_msgs__msg__Payload__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__msg__Payload__FIELDS[] = {
  {
    {rmf_scheduler_msgs__msg__Payload__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__FIELD_NAME__topic, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_BOUNDED_SEQUENCE,
      2097152,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__msg__Payload__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
      {rmf_scheduler_msgs__msg__Payload__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Denotes the type of payload\n"
  "uint8 type\n"
  "uint8 PAYLOAD_TYPE_SERIALIZED_MESSAGE=1\n"
  "\n"
  "string topic\n"
  "\n"
  "string message_type\n"
  "\n"
  "# max 2mb\n"
  "uint8[<=2097152] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 149, 149},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__msg__Payload__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
