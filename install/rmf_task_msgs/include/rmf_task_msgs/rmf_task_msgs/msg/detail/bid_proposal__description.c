// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/bid_proposal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__BidProposal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x35, 0xbf, 0xd8, 0xa5, 0x6b, 0xfa, 0x32,
      0xe6, 0xec, 0x68, 0x0c, 0x17, 0xa5, 0x84, 0x5f,
      0x77, 0xf4, 0x5c, 0x97, 0x68, 0x45, 0x96, 0xea,
      0x58, 0x21, 0x40, 0xba, 0x8e, 0x90, 0x1c, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char rmf_task_msgs__msg__BidProposal__TYPE_NAME[] = "rmf_task_msgs/msg/BidProposal";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__BidProposal__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_task_msgs__msg__BidProposal__FIELD_NAME__expected_robot_name[] = "expected_robot_name";
static char rmf_task_msgs__msg__BidProposal__FIELD_NAME__prev_cost[] = "prev_cost";
static char rmf_task_msgs__msg__BidProposal__FIELD_NAME__new_cost[] = "new_cost";
static char rmf_task_msgs__msg__BidProposal__FIELD_NAME__finish_time[] = "finish_time";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__BidProposal__FIELDS[] = {
  {
    {rmf_task_msgs__msg__BidProposal__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidProposal__FIELD_NAME__expected_robot_name, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidProposal__FIELD_NAME__prev_cost, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidProposal__FIELD_NAME__new_cost, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidProposal__FIELD_NAME__finish_time, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__BidProposal__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__BidProposal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__BidProposal__TYPE_NAME, 29, 29},
      {rmf_task_msgs__msg__BidProposal__FIELDS, 5, 5},
    },
    {rmf_task_msgs__msg__BidProposal__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is published by a Fleet Adapter in response to a BidNotice\n"
  "# message.\n"
  "\n"
  "# The name of the Fleet Adapter publishing this message\n"
  "string fleet_name\n"
  "\n"
  "# The name of the robot in the fleet which will potentially execute the task\n"
  "string expected_robot_name\n"
  "\n"
  "# The overall cost of task assignments prior to accommodating the new task\n"
  "float64 prev_cost\n"
  "\n"
  "# The overall cost of task assignments after accommodating the new task\n"
  "float64 new_cost\n"
  "\n"
  "# The estimated finish time of the new task\n"
  "builtin_interfaces/Time finish_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__BidProposal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__BidProposal__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 530, 530},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__BidProposal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__BidProposal__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
