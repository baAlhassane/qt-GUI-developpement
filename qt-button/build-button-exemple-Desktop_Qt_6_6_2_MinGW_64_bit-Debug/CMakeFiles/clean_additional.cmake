# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\button-exemple_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\button-exemple_autogen.dir\\ParseCache.txt"
  "button-exemple_autogen"
  )
endif()
