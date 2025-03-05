// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0x1b, 0x5b, 0x51, 0x6f, 0xa0, 0xb4, 0x13,
      0xb2, 0x1f, 0xc5, 0xa3, 0x2b, 0xd9, 0x13, 0xc9,
      0x5d, 0xcb, 0x3b, 0x9a, 0x97, 0x83, 0x5a, 0x9b,
      0x82, 0xb7, 0xea, 0x98, 0x6e, 0x1a, 0x19, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELD_NAME__time[] = "time";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELD_NAME__position[] = "position";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME, 39, 39},
      {rmf_traffic_msgs__msg__TrajectoryWaypoint__FIELDS, 3, 3},
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
  "# The time when this Waypoint should be reached\n"
  "int64 time\n"
  "\n"
  "# This is a 2D homogeneous position which mixes 2 translation coordinates (x, y)\n"
  "# with 1 rotation coordinate (yaw).\n"
  "#\n"
  "# The position of this Waypoint\n"
  "float64[3] position\n"
  "\n"
  "# This is a 2D homogeneous screw velocity with 2 translational components (x, y)\n"
  "# and 1 rotational component (yaw).\n"
  "#\n"
  "# The velocity that this vehicle should have when it reaches this Waypoint\n"
  "float64[3] velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 447, 447},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
