# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtLabel_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtLabel_autogen.dir\\ParseCache.txt"
  "QtLabel_autogen"
  )
endif()
