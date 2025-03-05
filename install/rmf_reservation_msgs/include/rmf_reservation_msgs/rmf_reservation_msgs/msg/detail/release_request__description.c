// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/ReleaseRequest.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/release_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__ReleaseRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0x43, 0x01, 0xc8, 0xbd, 0x5f, 0x4c, 0x83,
      0x88, 0x8e, 0xc2, 0x54, 0xf0, 0x9e, 0x35, 0x4f,
      0x64, 0x34, 0x32, 0x8c, 0xf8, 0x8e, 0x56, 0x9f,
      0xda, 0x65, 0x6a, 0xa5, 0x86, 0x2d, 0xc8, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_reservation_msgs__msg__RequestHeader__EXPECTED_HASH = {1, {
    0x79, 0x00, 0x02, 0xab, 0x8d, 0x8d, 0x83, 0x3f,
    0xb0, 0xff, 0xe4, 0xca, 0x9a, 0x5f, 0x8d, 0x69,
    0x74, 0x9e, 0x54, 0x36, 0x13, 0x86, 0x87, 0xce,
    0xf0, 0xd2, 0x6e, 0x8b, 0xec, 0x3a, 0xad, 0x16,
  }};
static const rosidl_type_hash_t rmf_reservation_msgs__msg__Ticket__EXPECTED_HASH = {1, {
    0xf4, 0x37, 0x06, 0x6a, 0xb4, 0x40, 0x2f, 0x42,
    0x9b, 0x4b, 0x4e, 0x86, 0xba, 0xb4, 0x08, 0x1d,
    0x43, 0xc8, 0x9b, 0xb8, 0x26, 0x07, 0x28, 0x68,
    0xad, 0x29, 0xe1, 0xc7, 0x90, 0xef, 0xf7, 0xba,
  }};
#endif

static char rmf_reservation_msgs__msg__ReleaseRequest__TYPE_NAME[] = "rmf_reservation_msgs/msg/ReleaseRequest";
static char rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME[] = "rmf_reservation_msgs/msg/RequestHeader";
static char rmf_reservation_msgs__msg__Ticket__TYPE_NAME[] = "rmf_reservation_msgs/msg/Ticket";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__ReleaseRequest__FIELD_NAME__ticket[] = "ticket";
static char rmf_reservation_msgs__msg__ReleaseRequest__FIELD_NAME__location[] = "location";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__ReleaseRequest__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__ReleaseRequest__FIELD_NAME__ticket, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_reservation_msgs__msg__Ticket__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__ReleaseRequest__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_reservation_msgs__msg__ReleaseRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__Ticket__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_reservation_msgs__msg__ReleaseRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__ReleaseRequest__TYPE_NAME, 39, 39},
      {rmf_reservation_msgs__msg__ReleaseRequest__FIELDS, 2, 2},
    },
    {rmf_reservation_msgs__msg__ReleaseRequest__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_reservation_msgs__msg__RequestHeader__EXPECTED_HASH, rmf_reservation_msgs__msg__RequestHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_reservation_msgs__msg__RequestHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_reservation_msgs__msg__Ticket__EXPECTED_HASH, rmf_reservation_msgs__msg__Ticket__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_reservation_msgs__msg__Ticket__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "rmf_reservation_msgs/Ticket ticket\n"
  "string location";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__ReleaseRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__ReleaseRequest__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__ReleaseRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__ReleaseRequest__get_individual_type_description_source(NULL),
    sources[1] = *rmf_reservation_msgs__msg__RequestHeader__get_individual_type_description_source(NULL);
    sources[2] = *rmf_reservation_msgs__msg__Ticket__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
