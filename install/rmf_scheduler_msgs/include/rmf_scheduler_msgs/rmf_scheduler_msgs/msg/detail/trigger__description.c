// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:msg/Trigger.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/msg/detail/trigger__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__msg__Trigger__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xa9, 0xdc, 0xef, 0x7c, 0xf1, 0x62, 0xe3,
      0xad, 0x5b, 0xce, 0x02, 0xc2, 0x1f, 0x3c, 0x27,
      0x0f, 0x13, 0x9e, 0x9e, 0xae, 0x76, 0x74, 0x35,
      0x9f, 0xd4, 0xe6, 0x49, 0x43, 0x41, 0xec, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH = {1, {
    0xc9, 0x73, 0x95, 0x52, 0xb9, 0x9a, 0xc5, 0xdc,
    0x0c, 0x69, 0xfb, 0x91, 0x96, 0xe9, 0xf8, 0xc0,
    0x27, 0x3a, 0x50, 0xb4, 0xdb, 0x65, 0x63, 0xf0,
    0xb4, 0x37, 0x47, 0xd1, 0x05, 0x6d, 0xc3, 0xd7,
  }};
#endif

static char rmf_scheduler_msgs__msg__Trigger__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Trigger";
static char rmf_scheduler_msgs__msg__Payload__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Payload";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__name[] = "name";
static char rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__created_at[] = "created_at";
static char rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__at[] = "at";
static char rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__group[] = "group";
static char rmf_scheduler_msgs__msg__Trigger__DEFAULT_VALUE__group[] = "default";
static char rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__payload[] = "payload";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__msg__Trigger__FIELDS[] = {
  {
    {rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__created_at, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__at, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__group, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_scheduler_msgs__msg__Trigger__DEFAULT_VALUE__group, 7, 7},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__msg__Trigger__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__msg__Trigger__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__msg__Trigger__TYPE_NAME, 30, 30},
      {rmf_scheduler_msgs__msg__Trigger__FIELDS, 5, 5},
    },
    {rmf_scheduler_msgs__msg__Trigger__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Name to identify the trigger, must be unique across all triggers.\n"
  "string name\n"
  "\n"
  "# unix timestamp in seconds\n"
  "int64 created_at\n"
  "\n"
  "# unix timestamp in seconds when the trigger should run\n"
  "int64 at\n"
  "\n"
  "string group \"default\"\n"
  "\n"
  "Payload payload";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__msg__Trigger__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__msg__Trigger__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 233, 233},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__msg__Trigger__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__msg__Trigger__get_individual_type_description_source(NULL),
    sources[1] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
