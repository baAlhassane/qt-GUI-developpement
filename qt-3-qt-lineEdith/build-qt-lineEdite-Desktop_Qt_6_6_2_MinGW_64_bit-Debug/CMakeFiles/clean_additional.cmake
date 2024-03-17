# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qt-lineEdite_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qt-lineEdite_autogen.dir\\ParseCache.txt"
  "qt-lineEdite_autogen"
  )
endif()
