// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:srv/CancelTrigger.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/srv/detail/cancel_trigger__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelTrigger__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xd2, 0x4e, 0xcd, 0x14, 0xb3, 0xbf, 0x4f,
      0x95, 0xdc, 0xcb, 0x11, 0xbf, 0xf9, 0xf9, 0x54,
      0x08, 0x3c, 0x2b, 0x41, 0x21, 0xa4, 0x96, 0x51,
      0x31, 0x7b, 0xcc, 0xdb, 0x01, 0x81, 0x05, 0xf5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelTrigger_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0xe6, 0x4d, 0xbb, 0x2b, 0xf5, 0xcd, 0xc6,
      0xc2, 0x9f, 0xe3, 0x0f, 0x81, 0x49, 0xe5, 0xb3,
      0x9b, 0x50, 0x25, 0x49, 0xbe, 0xac, 0xfe, 0x0a,
      0x5d, 0x9f, 0x84, 0xd0, 0x3f, 0x76, 0x73, 0x2b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelTrigger_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xce, 0x5b, 0x8e, 0x5d, 0x5c, 0xd8, 0xbe,
      0xec, 0x7f, 0xa8, 0x72, 0x14, 0x23, 0x67, 0x41,
      0xe2, 0xdf, 0x2f, 0xdd, 0x92, 0x40, 0x19, 0x39,
      0xb3, 0x57, 0x70, 0xf1, 0x62, 0xb6, 0x11, 0xe8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelTrigger_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x93, 0x26, 0x79, 0x92, 0xa5, 0x3a, 0x0a,
      0x67, 0x98, 0x25, 0x8d, 0x15, 0x68, 0x11, 0xe6,
      0xca, 0x10, 0x41, 0x1b, 0x5f, 0x9e, 0x7d, 0xb0,
      0x83, 0xcc, 0x0b, 0x1f, 0x3c, 0x10, 0xc5, 0x75,
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

static char rmf_scheduler_msgs__srv__CancelTrigger__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelTrigger";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_scheduler_msgs__srv__CancelTrigger_Event__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelTrigger_Event";
static char rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelTrigger_Request";
static char rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelTrigger_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelTrigger__FIELD_NAME__request_message[] = "request_message";
static char rmf_scheduler_msgs__srv__CancelTrigger__FIELD_NAME__response_message[] = "response_message";
static char rmf_scheduler_msgs__srv__CancelTrigger__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelTrigger__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelTrigger__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelTrigger_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CancelTrigger__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelTrigger__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelTrigger__TYPE_NAME, 36, 36},
      {rmf_scheduler_msgs__srv__CancelTrigger__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CancelTrigger__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__srv__CancelTrigger_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__CancelTrigger_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CancelTrigger_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelTrigger_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelTrigger_Request__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Request__FIELD_NAME__name, 4, 4},
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
rmf_scheduler_msgs__srv__CancelTrigger_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME, 44, 44},
      {rmf_scheduler_msgs__srv__CancelTrigger_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelTrigger_Response__FIELD_NAME__success[] = "success";
static char rmf_scheduler_msgs__srv__CancelTrigger_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelTrigger_Response__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Response__FIELD_NAME__message, 7, 7},
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
rmf_scheduler_msgs__srv__CancelTrigger_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME, 45, 45},
      {rmf_scheduler_msgs__srv__CancelTrigger_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELD_NAME__info[] = "info";
static char rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELD_NAME__request[] = "request";
static char rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CancelTrigger_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelTrigger_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelTrigger_Event__TYPE_NAME, 42, 42},
      {rmf_scheduler_msgs__srv__CancelTrigger_Event__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CancelTrigger_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__srv__CancelTrigger_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__CancelTrigger_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the trigger is successfully cancelled.\n"
  "bool success\n"
  "\n"
  "# If success is false, this provides a reason for the failure.\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelTrigger__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelTrigger__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelTrigger_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelTrigger_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelTrigger_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelTrigger_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelTrigger_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelTrigger_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelTrigger__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelTrigger__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__srv__CancelTrigger_Event__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__CancelTrigger_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CancelTrigger_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelTrigger_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelTrigger_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelTrigger_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelTrigger_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelTrigger_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelTrigger_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__srv__CancelTrigger_Request__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__CancelTrigger_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
