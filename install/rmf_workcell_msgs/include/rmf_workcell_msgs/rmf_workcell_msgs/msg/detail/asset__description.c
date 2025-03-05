// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#include "rmf_workcell_msgs/msg/detail/asset__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
const rosidl_type_hash_t *
rmf_workcell_msgs__msg__Asset__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x86, 0x53, 0xf6, 0x57, 0xaf, 0xf5, 0x1e,
      0x20, 0xe0, 0x95, 0x62, 0x13, 0x86, 0x62, 0x39,
      0x37, 0xdb, 0x81, 0xab, 0xa0, 0x60, 0xe7, 0x06,
      0x7f, 0x3f, 0xab, 0x9d, 0x6b, 0xad, 0x81, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_workcell_msgs__msg__Asset__TYPE_NAME[] = "rmf_workcell_msgs/msg/Asset";

// Define type names, field names, and default values
static char rmf_workcell_msgs__msg__Asset__FIELD_NAME__guid[] = "guid";
static char rmf_workcell_msgs__msg__Asset__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rmf_workcell_msgs__msg__Asset__FIELDS[] = {
  {
    {rmf_workcell_msgs__msg__Asset__FIELD_NAME__guid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__Asset__FIELD_NAME__type, 4, 4},
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
rmf_workcell_msgs__msg__Asset__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_workcell_msgs__msg__Asset__TYPE_NAME, 27, 27},
      {rmf_workcell_msgs__msg__Asset__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string guid\n"
  "string type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_workcell_msgs__msg__Asset__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_workcell_msgs__msg__Asset__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_workcell_msgs__msg__Asset__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_workcell_msgs__msg__Asset__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
