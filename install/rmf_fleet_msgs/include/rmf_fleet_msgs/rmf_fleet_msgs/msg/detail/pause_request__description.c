// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/PauseRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/pause_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__PauseRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0xd0, 0xfe, 0x23, 0x3e, 0x11, 0x75, 0x22,
      0x4d, 0x28, 0xd0, 0xe8, 0xa3, 0x5b, 0xe3, 0x3f,
      0x92, 0xea, 0x46, 0xe8, 0x5f, 0x6a, 0x85, 0x56,
      0xf8, 0x74, 0x1c, 0x60, 0xb3, 0x8b, 0xb8, 0x15,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__PauseRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/PauseRequest";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__mode_request_id[] = "mode_request_id";
static char rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__type[] = "type";
static char rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__at_checkpoint[] = "at_checkpoint";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__PauseRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__mode_request_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__PauseRequest__FIELD_NAME__at_checkpoint, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__PauseRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__PauseRequest__TYPE_NAME, 31, 31},
      {rmf_fleet_msgs__msg__PauseRequest__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string fleet_name\n"
  "string robot_name\n"
  "uint64 mode_request_id\n"
  "\n"
  "uint32 TYPE_PAUSE_IMMEDIATELY=0\n"
  "uint32 TYPE_PAUSE_AT_CHECKPOINT=1\n"
  "uint32 TYPE_RESUME=2\n"
  "uint32 type\n"
  "\n"
  "uint32 at_checkpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__PauseRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__PauseRequest__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 181, 181},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__PauseRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__PauseRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
