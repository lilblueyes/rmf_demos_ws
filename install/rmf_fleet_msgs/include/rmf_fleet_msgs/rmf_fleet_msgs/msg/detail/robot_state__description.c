// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/robot_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__RobotState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0xaf, 0xab, 0x7d, 0xe7, 0x1f, 0xff, 0x5e,
      0xc9, 0x92, 0xcb, 0x0e, 0x98, 0x09, 0x26, 0x83,
      0x35, 0xc3, 0x58, 0xad, 0xef, 0xc4, 0xa5, 0x03,
      0xbf, 0x9c, 0x3c, 0xe0, 0x75, 0xda, 0x0c, 0x9f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"
#include "rmf_fleet_msgs/msg/detail/location__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__Location__EXPECTED_HASH = {1, {
    0x61, 0x36, 0xf1, 0xfc, 0x14, 0xb8, 0x96, 0xb5,
    0x72, 0xc3, 0x47, 0x46, 0xc5, 0x5d, 0xbb, 0xfd,
    0x88, 0x62, 0xe3, 0xc5, 0x61, 0xad, 0x5c, 0x95,
    0x7e, 0xe8, 0xb0, 0xc1, 0x16, 0xa0, 0xe8, 0xdf,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__RobotMode__EXPECTED_HASH = {1, {
    0x9c, 0xd4, 0xcf, 0x77, 0x30, 0x31, 0x22, 0x9f,
    0x53, 0x73, 0xfd, 0x1b, 0x94, 0x2a, 0xcf, 0x16,
    0xd1, 0x40, 0x66, 0x4b, 0x79, 0xe2, 0x46, 0x3b,
    0x5e, 0x47, 0x6c, 0x1e, 0xf6, 0x93, 0x3b, 0x2d,
  }};
#endif

static char rmf_fleet_msgs__msg__RobotState__TYPE_NAME[] = "rmf_fleet_msgs/msg/RobotState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_fleet_msgs__msg__Location__TYPE_NAME[] = "rmf_fleet_msgs/msg/Location";
static char rmf_fleet_msgs__msg__RobotMode__TYPE_NAME[] = "rmf_fleet_msgs/msg/RobotMode";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__name[] = "name";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__model[] = "model";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__task_id[] = "task_id";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__seq[] = "seq";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__mode[] = "mode";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__battery_percent[] = "battery_percent";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__location[] = "location";
static char rmf_fleet_msgs__msg__RobotState__FIELD_NAME__path[] = "path";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__RobotState__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__model, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__battery_percent, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__FIELD_NAME__path, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__RobotState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__RobotState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__RobotState__TYPE_NAME, 29, 29},
      {rmf_fleet_msgs__msg__RobotState__FIELDS, 8, 8},
    },
    {rmf_fleet_msgs__msg__RobotState__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__Location__EXPECTED_HASH, rmf_fleet_msgs__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__Location__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__RobotMode__EXPECTED_HASH, rmf_fleet_msgs__msg__RobotMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_fleet_msgs__msg__RobotMode__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string model\n"
  "\n"
  "# task_id is copied in from the most recent Request message,\n"
  "# such as ModeRequest, DestinationRequest, or PathRequest\n"
  "string task_id\n"
  "\n"
  "# The sequence number of this message. Every new message should increment the\n"
  "# sequence number by 1.\n"
  "uint64 seq\n"
  "\n"
  "RobotMode mode\n"
  "float32 battery_percent\n"
  "Location location\n"
  "Location[] path";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__RobotState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__RobotState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 348, 348},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__RobotState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__RobotState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__Location__get_individual_type_description_source(NULL);
    sources[3] = *rmf_fleet_msgs__msg__RobotMode__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
