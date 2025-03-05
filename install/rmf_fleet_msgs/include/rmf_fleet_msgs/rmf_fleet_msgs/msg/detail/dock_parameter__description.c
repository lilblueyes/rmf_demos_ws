// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/dock_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__DockParameter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xdf, 0xcb, 0xec, 0xb0, 0xfa, 0x90, 0x1b,
      0x33, 0x9e, 0xdc, 0x32, 0x76, 0x8c, 0x19, 0x7f,
      0x84, 0x5d, 0x6e, 0x20, 0xd3, 0x0a, 0x03, 0x99,
      0xbf, 0x4c, 0xa8, 0xed, 0x80, 0x96, 0x33, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
#endif

static char rmf_fleet_msgs__msg__DockParameter__TYPE_NAME[] = "rmf_fleet_msgs/msg/DockParameter";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_fleet_msgs__msg__Location__TYPE_NAME[] = "rmf_fleet_msgs/msg/Location";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__DockParameter__FIELD_NAME__start[] = "start";
static char rmf_fleet_msgs__msg__DockParameter__FIELD_NAME__finish[] = "finish";
static char rmf_fleet_msgs__msg__DockParameter__FIELD_NAME__path[] = "path";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__DockParameter__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__DockParameter__FIELD_NAME__start, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DockParameter__FIELD_NAME__finish, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DockParameter__FIELD_NAME__path, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__DockParameter__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__DockParameter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__DockParameter__TYPE_NAME, 32, 32},
      {rmf_fleet_msgs__msg__DockParameter__FIELDS, 3, 3},
    },
    {rmf_fleet_msgs__msg__DockParameter__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__Location__EXPECTED_HASH, rmf_fleet_msgs__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__Location__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The name of the waypoint where the docking begins\n"
  "string start\n"
  "\n"
  "# The name of the waypoint where the docking ends\n"
  "string finish\n"
  "\n"
  "# The points in the docking path\n"
  "Location[] path";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__DockParameter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__DockParameter__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__DockParameter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__DockParameter__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__Location__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
