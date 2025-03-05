// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_building_map_msgs:msg/Place.idl
// generated code does not contain a copyright notice

#include "rmf_building_map_msgs/msg/detail/place__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__msg__Place__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xed, 0xdc, 0x31, 0x9a, 0x9e, 0x44, 0xe7,
      0x66, 0x6e, 0x08, 0xf1, 0xfb, 0x76, 0x15, 0x06,
      0xd8, 0xf9, 0x1c, 0xcc, 0x15, 0x00, 0xd7, 0xf1,
      0x41, 0x94, 0x00, 0x08, 0xc4, 0x4e, 0x80, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_building_map_msgs__msg__Place__TYPE_NAME[] = "rmf_building_map_msgs/msg/Place";

// Define type names, field names, and default values
static char rmf_building_map_msgs__msg__Place__FIELD_NAME__name[] = "name";
static char rmf_building_map_msgs__msg__Place__FIELD_NAME__x[] = "x";
static char rmf_building_map_msgs__msg__Place__FIELD_NAME__y[] = "y";
static char rmf_building_map_msgs__msg__Place__FIELD_NAME__yaw[] = "yaw";
static char rmf_building_map_msgs__msg__Place__FIELD_NAME__position_tolerance[] = "position_tolerance";
static char rmf_building_map_msgs__msg__Place__FIELD_NAME__yaw_tolerance[] = "yaw_tolerance";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__msg__Place__FIELDS[] = {
  {
    {rmf_building_map_msgs__msg__Place__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__FIELD_NAME__position_tolerance, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__FIELD_NAME__yaw_tolerance, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__msg__Place__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__msg__Place__TYPE_NAME, 31, 31},
      {rmf_building_map_msgs__msg__Place__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float32 x\n"
  "float32 y\n"
  "float32 yaw\n"
  "float32 position_tolerance\n"
  "float32 yaw_tolerance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__msg__Place__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__msg__Place__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 93, 93},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__msg__Place__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__msg__Place__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
