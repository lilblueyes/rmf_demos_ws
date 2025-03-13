// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Participants.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/participants__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Participants__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x6b, 0xe6, 0x93, 0x01, 0x46, 0xe4, 0x7a,
      0xa3, 0x80, 0x0b, 0x73, 0x93, 0xb5, 0x61, 0xe3,
      0x89, 0xf1, 0xa6, 0x54, 0x3a, 0x96, 0xfc, 0xc1,
      0xa8, 0x05, 0x7f, 0x1e, 0x44, 0x4d, 0xde, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/profile__functions.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"
#include "rmf_traffic_msgs/msg/detail/participant_description__functions.h"
#include "rmf_traffic_msgs/msg/detail/circle__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_identity__functions.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_traffic_msgs/msg/detail/participant__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Circle__EXPECTED_HASH = {1, {
    0xd0, 0x12, 0x71, 0xf4, 0x8e, 0xa9, 0x4a, 0x8a,
    0xa4, 0x93, 0x38, 0xc5, 0x5f, 0x66, 0xfc, 0xda,
    0x71, 0xb4, 0xe2, 0xa6, 0x02, 0x34, 0x6b, 0xce,
    0x3b, 0xcb, 0x3a, 0x24, 0xd8, 0xca, 0xa1, 0x46,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH = {1, {
    0xb0, 0xb8, 0xe9, 0x28, 0x3b, 0x66, 0x25, 0x24,
    0x09, 0x44, 0x96, 0xa1, 0x4f, 0xed, 0x4c, 0x35,
    0x04, 0xd8, 0xc0, 0x3b, 0xc5, 0x1d, 0x7d, 0x5f,
    0x69, 0x19, 0x2a, 0x3a, 0x0f, 0xfe, 0x45, 0x76,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH = {1, {
    0x63, 0x4f, 0xfe, 0xd8, 0xb4, 0x71, 0xfe, 0x5a,
    0xc9, 0xc9, 0xb5, 0x40, 0xcd, 0xef, 0xea, 0x5f,
    0xad, 0xd1, 0xd5, 0x0d, 0x35, 0xdc, 0xdc, 0x80,
    0x03, 0x0c, 0xe1, 0xc4, 0x10, 0x4d, 0xd9, 0xf6,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Participant__EXPECTED_HASH = {1, {
    0xd1, 0x60, 0xc5, 0x79, 0xce, 0x74, 0xd8, 0x78,
    0xd9, 0xdf, 0xf9, 0xa2, 0x97, 0xf9, 0x4e, 0xe7,
    0xc8, 0xfa, 0xe5, 0x83, 0x16, 0xcc, 0x52, 0x9f,
    0x01, 0x5c, 0x5e, 0x39, 0x11, 0x33, 0x75, 0x25,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ParticipantDescription__EXPECTED_HASH = {1, {
    0xca, 0x77, 0x7f, 0x89, 0xd7, 0xb7, 0x38, 0xa4,
    0x5b, 0x20, 0x04, 0x2e, 0x34, 0x70, 0xba, 0x58,
    0x77, 0xe9, 0x81, 0x05, 0x02, 0x58, 0xe1, 0x98,
    0x7e, 0xea, 0x9e, 0x37, 0xed, 0x4c, 0x44, 0x56,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Profile__EXPECTED_HASH = {1, {
    0xba, 0xb5, 0x43, 0x76, 0x67, 0x95, 0x2a, 0x08,
    0x49, 0x85, 0x74, 0x25, 0x59, 0xf4, 0x82, 0x48,
    0x86, 0xdd, 0xbd, 0x01, 0xd5, 0x94, 0x75, 0xc7,
    0x4c, 0xf8, 0x6c, 0x9c, 0x75, 0x1a, 0x7c, 0x01,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ScheduleIdentity__EXPECTED_HASH = {1, {
    0x63, 0x69, 0x39, 0xa8, 0x3f, 0x62, 0x6e, 0xda,
    0x39, 0xae, 0xfa, 0x97, 0x0f, 0x26, 0xf5, 0xbb,
    0x95, 0xac, 0xe9, 0xa5, 0x37, 0x2b, 0xf9, 0x1e,
    0x9c, 0x20, 0xc6, 0xae, 0x32, 0xeb, 0x55, 0x02,
  }};
#endif

static char rmf_traffic_msgs__msg__Participants__TYPE_NAME[] = "rmf_traffic_msgs/msg/Participants";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_traffic_msgs__msg__Circle__TYPE_NAME[] = "rmf_traffic_msgs/msg/Circle";
static char rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShape";
static char rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShapeContext";
static char rmf_traffic_msgs__msg__Participant__TYPE_NAME[] = "rmf_traffic_msgs/msg/Participant";
static char rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME[] = "rmf_traffic_msgs/msg/ParticipantDescription";
static char rmf_traffic_msgs__msg__Profile__TYPE_NAME[] = "rmf_traffic_msgs/msg/Profile";
static char rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleIdentity";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Participants__FIELD_NAME__node_id[] = "node_id";
static char rmf_traffic_msgs__msg__Participants__FIELD_NAME__participants[] = "participants";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Participants__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Participants__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Participants__FIELD_NAME__participants, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__Participant__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__Participants__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Participant__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ParticipantDescription__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Profile__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleIdentity__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__Participants__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Participants__TYPE_NAME, 33, 33},
      {rmf_traffic_msgs__msg__Participants__FIELDS, 2, 2},
    },
    {rmf_traffic_msgs__msg__Participants__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ConvexShape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Participant__EXPECTED_HASH, rmf_traffic_msgs__msg__Participant__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__Participant__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ParticipantDescription__EXPECTED_HASH, rmf_traffic_msgs__msg__ParticipantDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__ParticipantDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Profile__EXPECTED_HASH, rmf_traffic_msgs__msg__Profile__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_traffic_msgs__msg__Profile__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ScheduleIdentity__EXPECTED_HASH, rmf_traffic_msgs__msg__ScheduleIdentity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_traffic_msgs__msg__ScheduleIdentity__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The version of the schedule node that provided this update\n"
  "ScheduleIdentity node_id\n"
  "\n"
  "# A list of participants with their IDs\n"
  "Participant[] participants";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Participants__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Participants__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 154, 154},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Participants__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Participants__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ConvexShape__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__Participant__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__ParticipantDescription__get_individual_type_description_source(NULL);
    sources[7] = *rmf_traffic_msgs__msg__Profile__get_individual_type_description_source(NULL);
    sources[8] = *rmf_traffic_msgs__msg__ScheduleIdentity__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
