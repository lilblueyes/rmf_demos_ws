// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/MutexGroupRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/mutex_group_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__MutexGroupRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x46, 0xc4, 0xcc, 0x75, 0x97, 0x02, 0xda,
      0xc9, 0x5c, 0xbf, 0x6d, 0x65, 0x8b, 0xa0, 0x1f,
      0x2a, 0x24, 0x7b, 0x9a, 0x4a, 0xed, 0x0f, 0x1f,
      0x7e, 0x14, 0x7f, 0x0c, 0x16, 0x0b, 0xd6, 0x7b,
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

static char rmf_fleet_msgs__msg__MutexGroupRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/MutexGroupRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__group[] = "group";
static char rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__claimant[] = "claimant";
static char rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__claim_time[] = "claim_time";
static char rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__MutexGroupRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__group, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__claimant, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__claim_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__MutexGroupRequest__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__MutexGroupRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__MutexGroupRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__MutexGroupRequest__TYPE_NAME, 36, 36},
      {rmf_fleet_msgs__msg__MutexGroupRequest__FIELDS, 4, 4},
    },
    {rmf_fleet_msgs__msg__MutexGroupRequest__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to attempt to claim a mutex group. It should be sent\n"
  "# periodically for the entire duration that the claimer needs the mutex because\n"
  "# mutex groups have a limited-time leasing period that will timeout if a request\n"
  "# heartbeat is not received in some amount of time.\n"
  "\n"
  "# Name of the mutex group that is being claimed\n"
  "string group\n"
  "\n"
  "# Name of the agent that is trying to claim the mutex group.\n"
  "uint64 claimant\n"
  "\n"
  "# Time stamp of when the claim request began. The same time stamp should be used\n"
  "# for all subsequent heartbeat messages related to this claim. If the claim time\n"
  "# changes then this claim will be treated a new claim and may be deprioritized.\n"
  "# Earlier claims have priority over later claims.\n"
  "builtin_interfaces/Time claim_time\n"
  "\n"
  "# What kind of request is this?\n"
  "uint32 mode\n"
  "# Request to release the mutex group from this claimer\n"
  "uint32 MODE_RELEASE=0\n"
  "# Request to lock the mutex group for this claimer\n"
  "uint32 MODE_LOCK=1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__MutexGroupRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__MutexGroupRequest__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 949, 949},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__MutexGroupRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__MutexGroupRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
