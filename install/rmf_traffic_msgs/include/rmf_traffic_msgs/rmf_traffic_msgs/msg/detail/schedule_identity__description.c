// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleIdentity.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_identity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleIdentity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x69, 0x39, 0xa8, 0x3f, 0x62, 0x6e, 0xda,
      0x39, 0xae, 0xfa, 0x97, 0x0f, 0x26, 0xf5, 0xbb,
      0x95, 0xac, 0xe9, 0xa5, 0x37, 0x2b, 0xf9, 0x1e,
      0x9c, 0x20, 0xc6, 0xae, 0x32, 0xeb, 0x55, 0x02,
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

static char rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleIdentity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleIdentity__FIELD_NAME__node_uuid[] = "node_uuid";
static char rmf_traffic_msgs__msg__ScheduleIdentity__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleIdentity__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleIdentity__FIELD_NAME__node_uuid, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleIdentity__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__ScheduleIdentity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__ScheduleIdentity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
      {rmf_traffic_msgs__msg__ScheduleIdentity__FIELDS, 2, 2},
    },
    {rmf_traffic_msgs__msg__ScheduleIdentity__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The UUID of the new schedule node\n"
  "# TODO(MXG): Consider using uuid_msgs here: https://github.com/ros-geographic-info/unique_identifier/blob/master/uuid_msgs/msg/UniqueID.msg\n"
  "string node_uuid\n"
  "\n"
  "# The time that the new schedule node was started. In the event that multiple\n"
  "# schedule nodes have been started, the one with the newest timestamp will be\n"
  "# considered the active node, and the rest of the nodes will shut down.\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleIdentity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 456, 456},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleIdentity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleIdentity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
