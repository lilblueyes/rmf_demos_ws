// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__TrafficDependency__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0x65, 0x53, 0x58, 0x3f, 0xcd, 0x8c, 0x95,
      0xc9, 0x97, 0x4e, 0xa7, 0xb1, 0x39, 0x7e, 0xa9,
      0x19, 0x81, 0xbc, 0x85, 0x2d, 0x7b, 0xf6, 0x1c,
      0xa6, 0x68, 0x21, 0xed, 0xa0, 0xa6, 0x0e, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrafficDependency";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__dependent_checkpoint[] = "dependent_checkpoint";
static char rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_participant[] = "on_participant";
static char rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_plan[] = "on_plan";
static char rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_route[] = "on_route";
static char rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_checkpoint[] = "on_checkpoint";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__TrafficDependency__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__dependent_checkpoint, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_participant, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_plan, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_route, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrafficDependency__FIELD_NAME__on_checkpoint, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__TrafficDependency__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME, 38, 38},
      {rmf_traffic_msgs__msg__TrafficDependency__FIELDS, 5, 5},
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
  "uint64 dependent_checkpoint\n"
  "\n"
  "uint64 on_participant\n"
  "uint64 on_plan\n"
  "uint64 on_route\n"
  "uint64 on_checkpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__TrafficDependency__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__TrafficDependency__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 104, 104},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__TrafficDependency__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__TrafficDependency__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
