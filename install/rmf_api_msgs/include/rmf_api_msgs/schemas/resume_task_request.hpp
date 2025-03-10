/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__RESUME_TASK_REQUEST
#define RMF_API_MSGS__SCHEMAS__RESUME_TASK_REQUEST

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json resume_task_request =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/resume_task_request.json",
  "title": "Task Resume Request",
  "description": "This can be used to discard task interruption requests. When all interruption requests for a task are discarded, the task will resume.",
  "properties": {
    "type": {
      "description": "Indicate that this is a task resuming request",
      "type": "string",
      "enum": ["resume_task_request"]
    },
    "for_task": {
      "description": "Specify task ID to resume.",
      "type": "string"
    },
    "for_tokens": {
      "description": "A list of tokens of interruption requests which should be resumed. The interruption request associated with each token will be discarded.",
      "type": "array",
      "items": { "type": "string" },
      "minItems": 1,
      "uniqueItems": true
    },
    "labels": {
      "description": "Labels describing this request, items can be a single value like `dashboard` or a key-value pair like `app=dashboard`, in the case of a single value, it will be interpreted as a key-value pair with an empty string value.",
      "type": "array",
      "items": { "type": "string" }
    }
  },
  "require": ["type", "for_task", "for_tokens"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__RESUME_TASK_REQUEST
