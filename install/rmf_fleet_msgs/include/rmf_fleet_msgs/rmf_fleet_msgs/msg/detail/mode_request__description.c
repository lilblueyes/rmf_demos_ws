// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/ModeRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/mode_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__ModeRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xb0, 0x7b, 0xe6, 0x07, 0xf8, 0x21, 0xc3,
      0x42, 0x9e, 0x4e, 0x8e, 0x95, 0x1c, 0xf1, 0xce,
      0xc9, 0xfa, 0x89, 0xa0, 0x3b, 0xc5, 0xbf, 0x70,
      0x94, 0x7c, 0xf4, 0xc8, 0x5e, 0xa3, 0xd0, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/mode_parameter__functions.h"
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_fleet_msgs__msg__ModeParameter__EXPECTED_HASH = {1, {
    0x96, 0x5e, 0x84, 0xb9, 0x59, 0xf6, 0xea, 0x45,
    0x1a, 0xb7, 0xd4, 0x8a, 0x06, 0xee, 0xc4, 0x9e,
    0x9c, 0xce, 0xe9, 0x7d, 0x14, 0x1a, 0x36, 0x1e,
    0x64, 0x1a, 0x55, 0xb5, 0x86, 0xe0, 0x29, 0x08,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__RobotMode__EXPECTED_HASH = {1, {
    0x9c, 0xd4, 0xcf, 0x77, 0x30, 0x31, 0x22, 0x9f,
    0x53, 0x73, 0xfd, 0x1b, 0x94, 0x2a, 0xcf, 0x16,
    0xd1, 0x40, 0x66, 0x4b, 0x79, 0xe2, 0x46, 0x3b,
    0x5e, 0x47, 0x6c, 0x1e, 0xf6, 0x93, 0x3b, 0x2d,
  }};
#endif

static char rmf_fleet_msgs__msg__ModeRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/ModeRequest";
static char rmf_fleet_msgs__msg__ModeParameter__TYPE_NAME[] = "rmf_fleet_msgs/msg/ModeParameter";
static char rmf_fleet_msgs__msg__RobotMode__TYPE_NAME[] = "rmf_fleet_msgs/msg/RobotMode";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__mode[] = "mode";
static char rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__task_id[] = "task_id";
static char rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__parameters[] = "parameters";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__ModeRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ModeRequest__FIELD_NAME__parameters, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__ModeParameter__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__ModeRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_fleet_msgs__msg__ModeParameter__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__ModeRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__ModeRequest__TYPE_NAME, 30, 30},
      {rmf_fleet_msgs__msg__ModeRequest__FIELDS, 5, 5},
    },
    {rmf_fleet_msgs__msg__ModeRequest__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_fleet_msgs__msg__ModeParameter__EXPECTED_HASH, rmf_fleet_msgs__msg__ModeParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_fleet_msgs__msg__ModeParameter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__RobotMode__EXPECTED_HASH, rmf_fleet_msgs__msg__RobotMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__RobotMode__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string fleet_name\n"
  "string robot_name\n"
  "RobotMode mode\n"
  "\n"
  "# task_id must be copied into future RobotState messages\n"
  "string task_id\n"
  "\n"
  "# Some mode changes require parameters. For example, the name of a dock.\n"
  "ModeParameter[] parameters";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__ModeRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__ModeRequest__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 225, 225},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__ModeRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__ModeRequest__get_individual_type_description_source(NULL),
    sources[1] = *rmf_fleet_msgs__msg__ModeParameter__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__RobotMode__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
