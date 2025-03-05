// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__RobotMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0xd4, 0xcf, 0x77, 0x30, 0x31, 0x22, 0x9f,
      0x53, 0x73, 0xfd, 0x1b, 0x94, 0x2a, 0xcf, 0x16,
      0xd1, 0x40, 0x66, 0x4b, 0x79, 0xe2, 0x46, 0x3b,
      0x5e, 0x47, 0x6c, 0x1e, 0xf6, 0x93, 0x3b, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__RobotMode__TYPE_NAME[] = "rmf_fleet_msgs/msg/RobotMode";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__RobotMode__FIELD_NAME__mode[] = "mode";
static char rmf_fleet_msgs__msg__RobotMode__FIELD_NAME__mode_request_id[] = "mode_request_id";
static char rmf_fleet_msgs__msg__RobotMode__FIELD_NAME__performing_action[] = "performing_action";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__RobotMode__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__RobotMode__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotMode__FIELD_NAME__mode_request_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotMode__FIELD_NAME__performing_action, 17, 17},
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
rmf_fleet_msgs__msg__RobotMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
      {rmf_fleet_msgs__msg__RobotMode__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 mode\n"
  "uint32 MODE_IDLE=0\n"
  "uint32 MODE_CHARGING=1\n"
  "uint32 MODE_MOVING=2\n"
  "uint32 MODE_PAUSED=3\n"
  "uint32 MODE_WAITING=4\n"
  "uint32 MODE_EMERGENCY=5\n"
  "uint32 MODE_GOING_HOME=6\n"
  "uint32 MODE_DOCKING=7\n"
  "\n"
  "# Use this when a command received from the fleet adapter\n"
  "# has a problem and needs to be recomputed.\n"
  "uint32 MODE_ADAPTER_ERROR=8\n"
  "\n"
  "uint32 MODE_CLEANING=9\n"
  "\n"
  "# These modes are used to indicate that the robot has started or completed\n"
  "# performing an action in simulation, it is not encouraged to be used for\n"
  "# fleet adapters\n"
  "uint32 MODE_PERFORMING_ACTION=10\n"
  "uint32 MODE_ACTION_COMPLETED=11\n"
  "\n"
  "uint64 mode_request_id\n"
  "\n"
  "# Specify the action that the robot is performing when its current mode\n"
  "# is MODE_PERFORMING_ACTION\n"
  "string performing_action";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__RobotMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 726, 726},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__RobotMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__RobotMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
