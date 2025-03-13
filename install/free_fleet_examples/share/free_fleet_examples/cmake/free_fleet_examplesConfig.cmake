# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_free_fleet_examples_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED free_fleet_examples_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(free_fleet_examples_FOUND FALSE)
  elseif(NOT free_fleet_examples_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(free_fleet_examples_FOUND FALSE)
  endif()
  return()
endif()
set(_free_fleet_examples_CONFIG_INCLUDED TRUE)

# output package information
if(NOT free_fleet_examples_FIND_QUIETLY)
  message(STATUS "Found free_fleet_examples: 2.0.0 (${free_fleet_examples_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'free_fleet_examples' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT free_fleet_examples_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(free_fleet_examples_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${free_fleet_examples_DIR}/${_extra}")
endforeach()
