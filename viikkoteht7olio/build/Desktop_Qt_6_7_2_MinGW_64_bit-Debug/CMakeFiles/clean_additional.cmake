# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\viikkoteht7olio_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\viikkoteht7olio_autogen.dir\\ParseCache.txt"
  "viikkoteht7olio_autogen"
  )
endif()
