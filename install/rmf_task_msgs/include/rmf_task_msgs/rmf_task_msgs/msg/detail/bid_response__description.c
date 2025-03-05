// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/BidResponse.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/bid_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__BidResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xc5, 0x4d, 0xb8, 0x51, 0xd6, 0x95, 0xa4,
      0x03, 0x8b, 0xee, 0x0d, 0x00, 0x97, 0x59, 0x87,
      0xcf, 0x90, 0xc7, 0x33, 0x48, 0x50, 0x95, 0x88,
      0xae, 0x80, 0xff, 0x8c, 0x22, 0x03, 0xe5, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_task_msgs/msg/detail/bid_proposal__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__BidProposal__EXPECTED_HASH = {1, {
    0x6b, 0x35, 0xbf, 0xd8, 0xa5, 0x6b, 0xfa, 0x32,
    0xe6, 0xec, 0x68, 0x0c, 0x17, 0xa5, 0x84, 0x5f,
    0x77, 0xf4, 0x5c, 0x97, 0x68, 0x45, 0x96, 0xea,
    0x58, 0x21, 0x40, 0xba, 0x8e, 0x90, 0x1c, 0x06,
  }};
#endif

static char rmf_task_msgs__msg__BidResponse__TYPE_NAME[] = "rmf_task_msgs/msg/BidResponse";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_task_msgs__msg__BidProposal__TYPE_NAME[] = "rmf_task_msgs/msg/BidProposal";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__BidResponse__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__BidResponse__FIELD_NAME__has_proposal[] = "has_proposal";
static char rmf_task_msgs__msg__BidResponse__FIELD_NAME__proposal[] = "proposal";
static char rmf_task_msgs__msg__BidResponse__FIELD_NAME__errors[] = "errors";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__BidResponse__FIELDS[] = {
  {
    {rmf_task_msgs__msg__BidResponse__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidResponse__FIELD_NAME__has_proposal, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidResponse__FIELD_NAME__proposal, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__BidProposal__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidResponse__FIELD_NAME__errors, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__BidResponse__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BidProposal__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__BidResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__BidResponse__TYPE_NAME, 29, 29},
      {rmf_task_msgs__msg__BidResponse__FIELDS, 4, 4},
    },
    {rmf_task_msgs__msg__BidResponse__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__BidProposal__EXPECTED_HASH, rmf_task_msgs__msg__BidProposal__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__msg__BidProposal__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ID of the task that is being bid on\n"
  "string task_id\n"
  "\n"
  "# True if this response contains a proposal\n"
  "bool has_proposal\n"
  "\n"
  "# The proposal of this response, if has_proposal is true\n"
  "BidProposal proposal\n"
  "\n"
  "# Any errors related to this bid\n"
  "string[] errors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__BidResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__BidResponse__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 245, 245},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__BidResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__BidResponse__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__msg__BidProposal__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
