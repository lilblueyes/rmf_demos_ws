// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:srv/CancelSchedule.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/srv/detail/cancel_schedule__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelSchedule__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x33, 0x0a, 0xf1, 0x65, 0x51, 0x8a, 0xaa,
      0x16, 0xac, 0x6d, 0x29, 0xdc, 0x66, 0x09, 0xba,
      0xc7, 0x39, 0x58, 0xe1, 0xc9, 0x0e, 0x50, 0x63,
      0x71, 0xf1, 0xae, 0x52, 0xc0, 0x37, 0x72, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelSchedule_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x06, 0x0b, 0x80, 0xb2, 0xe4, 0xd5, 0x79,
      0xc3, 0x00, 0x4a, 0x38, 0xf9, 0xbb, 0x49, 0x86,
      0xab, 0x46, 0xe2, 0xe1, 0x16, 0xc7, 0xcc, 0xcd,
      0x09, 0x6c, 0xf1, 0x2a, 0xf3, 0x95, 0x41, 0xb6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelSchedule_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xbe, 0xd9, 0xc3, 0xb3, 0xf1, 0xfb, 0x98,
      0x84, 0x19, 0x08, 0xbe, 0x00, 0x41, 0xa3, 0x97,
      0xb9, 0xe8, 0x32, 0xaf, 0x41, 0x0b, 0x0d, 0xc8,
      0xd7, 0xa3, 0xa7, 0xa5, 0x77, 0xa8, 0x0d, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelSchedule_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x28, 0x32, 0x56, 0xb2, 0xf5, 0x54, 0x75,
      0x03, 0xcf, 0xf3, 0xaf, 0x3b, 0x2a, 0x82, 0x1d,
      0xf4, 0x44, 0x33, 0x60, 0x3f, 0xe3, 0xb7, 0xca,
      0xd5, 0xe7, 0x29, 0xa2, 0x57, 0xac, 0xb7, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_scheduler_msgs__srv__CancelSchedule__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelSchedule";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_scheduler_msgs__srv__CancelSchedule_Event__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelSchedule_Event";
static char rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelSchedule_Request";
static char rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelSchedule_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelSchedule__FIELD_NAME__request_message[] = "request_message";
static char rmf_scheduler_msgs__srv__CancelSchedule__FIELD_NAME__response_message[] = "response_message";
static char rmf_scheduler_msgs__srv__CancelSchedule__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelSchedule__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelSchedule__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelSchedule_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CancelSchedule__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelSchedule__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelSchedule__TYPE_NAME, 37, 37},
      {rmf_scheduler_msgs__srv__CancelSchedule__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CancelSchedule__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__srv__CancelSchedule_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__CancelSchedule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CancelSchedule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelSchedule_Request__FIELD_NAME__name[] = "name";
static char rmf_scheduler_msgs__srv__CancelSchedule_Request__FIELD_NAME__finished[] = "finished";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelSchedule_Request__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Request__FIELD_NAME__finished, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelSchedule_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME, 45, 45},
      {rmf_scheduler_msgs__srv__CancelSchedule_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelSchedule_Response__FIELD_NAME__success[] = "success";
static char rmf_scheduler_msgs__srv__CancelSchedule_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelSchedule_Response__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Response__FIELD_NAME__message, 7, 7},
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
rmf_scheduler_msgs__srv__CancelSchedule_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME, 46, 46},
      {rmf_scheduler_msgs__srv__CancelSchedule_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELD_NAME__info[] = "info";
static char rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELD_NAME__request[] = "request";
static char rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CancelSchedule_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelSchedule_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelSchedule_Event__TYPE_NAME, 43, 43},
      {rmf_scheduler_msgs__srv__CancelSchedule_Event__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CancelSchedule_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__srv__CancelSchedule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__CancelSchedule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "\n"
  "# Indicate that the schedule is considered finished successfully.\n"
  "bool finished\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the schedule is successfully cancelled.\n"
  "bool success\n"
  "\n"
  "# If success is false, this provides a reason for the failure.\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelSchedule__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelSchedule__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 251, 251},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelSchedule_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelSchedule_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelSchedule_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelSchedule_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelSchedule_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelSchedule_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelSchedule__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelSchedule__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__srv__CancelSchedule_Event__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__CancelSchedule_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CancelSchedule_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelSchedule_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelSchedule_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelSchedule_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelSchedule_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelSchedule_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelSchedule_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__srv__CancelSchedule_Request__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__CancelSchedule_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
