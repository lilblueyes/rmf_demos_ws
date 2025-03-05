// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Trajectory__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xef, 0x09, 0xfe, 0x0b, 0x60, 0x19, 0xe8,
      0xee, 0xc0, 0x93, 0xe6, 0x24, 0x7d, 0xed, 0x2e,
      0xd9, 0x4d, 0x3d, 0x16, 0x69, 0xfc, 0x92, 0x70,
      0xe8, 0x3d, 0x7d, 0x1c, 0xef, 0x13, 0x3e, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH = {1, {
    0xf5, 0x1b, 0x5b, 0x51, 0x6f, 0xa0, 0xb4, 0x13,
    0xb2, 0x1f, 0xc5, 0xa3, 0x2b, 0xd9, 0x13, 0xc9,
    0x5d, 0xcb, 0x3b, 0x9a, 0x97, 0x83, 0x5a, 0x9b,
    0x82, 0xb7, 0xea, 0x98, 0x6e, 0x1a, 0x19, 0xe2,
  }};
#endif

static char rmf_traffic_msgs__msg__Trajectory__TYPE_NAME[] = "rmf_traffic_msgs/msg/Trajectory";
static char rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/TrajectoryWaypoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Trajectory__FIELD_NAME__waypoints[] = "waypoints";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Trajectory__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Trajectory__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__Trajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__TrajectoryWaypoint__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__Trajectory__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Trajectory__TYPE_NAME, 31, 31},
      {rmf_traffic_msgs__msg__Trajectory__FIELDS, 1, 1},
    },
    {rmf_traffic_msgs__msg__Trajectory__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__TrajectoryWaypoint__EXPECTED_HASH, rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__TrajectoryWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# A Trajectory is a container of Waypoints. The standard way to interpret the\n"
  "# motion of a Trajectory is as a piecewise cubic spline connecting the\n"
  "# waypoints.\n"
  "TrajectoryWaypoint[] waypoints";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Trajectory__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Trajectory__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 194, 194},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Trajectory__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Trajectory__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__TrajectoryWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
