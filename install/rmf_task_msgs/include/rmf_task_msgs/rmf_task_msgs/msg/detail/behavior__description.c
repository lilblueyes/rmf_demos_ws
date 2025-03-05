// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/behavior__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Behavior__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x1d, 0xa1, 0x85, 0xa9, 0x8b, 0xb6, 0xaa,
      0x80, 0x00, 0xb7, 0x43, 0x15, 0xe7, 0x08, 0x22,
      0xa3, 0xe9, 0x30, 0x61, 0xde, 0xbc, 0x9d, 0xda,
      0xa8, 0x9e, 0x24, 0x82, 0xa5, 0xe2, 0x4e, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_task_msgs/msg/detail/behavior_parameter__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH = {1, {
    0xb7, 0xc9, 0x29, 0xfa, 0xd1, 0xe9, 0x15, 0xaa,
    0x1f, 0x01, 0x81, 0xa2, 0xbe, 0x23, 0xed, 0x27,
    0xad, 0x17, 0xcb, 0x58, 0x0f, 0x82, 0xc7, 0xd6,
    0x2e, 0x75, 0x51, 0xb5, 0x70, 0x0a, 0x71, 0x65,
  }};
#endif

static char rmf_task_msgs__msg__Behavior__TYPE_NAME[] = "rmf_task_msgs/msg/Behavior";
static char rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME[] = "rmf_task_msgs/msg/BehaviorParameter";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Behavior__FIELD_NAME__name[] = "name";
static char rmf_task_msgs__msg__Behavior__FIELD_NAME__parameters[] = "parameters";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Behavior__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Behavior__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Behavior__FIELD_NAME__parameters, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__Behavior__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__Behavior__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
      {rmf_task_msgs__msg__Behavior__FIELDS, 2, 2},
    },
    {rmf_task_msgs__msg__Behavior__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH, rmf_task_msgs__msg__BehaviorParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_task_msgs__msg__BehaviorParameter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "BehaviorParameter[] parameters";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Behavior__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Behavior__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Behavior__get_individual_type_description_source(NULL),
    sources[1] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
