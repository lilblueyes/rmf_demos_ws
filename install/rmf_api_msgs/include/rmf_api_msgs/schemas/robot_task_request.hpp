/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__ROBOT_TASK_REQUEST
#define RMF_API_MSGS__SCHEMAS__ROBOT_TASK_REQUEST

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json robot_task_request =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/robot_task_request.json",
  "title": "Robot Task Request",
  "description": "Request to be directly assigned to a specific robot",
  "type": "object",
  "properties": {
    "type": {
      "description": "Indicate that this is a direct task request",
      "type": "string",
      "constant": "robot_task_request"
    },
    "robot": {
      "description": "The name of the robot",
      "type": "string"
    },
    "fleet": {
      "description": "The fleet the robot belongs to",
      "type": "string"
    },
    "request": { "$ref": "task_request.json" }
  },
  "required": ["type", "robot", "fleet", "request"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__ROBOT_TASK_REQUEST
