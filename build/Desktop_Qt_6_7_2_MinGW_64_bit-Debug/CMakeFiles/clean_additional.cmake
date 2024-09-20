# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Deber1_poo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Deber1_poo_autogen.dir\\ParseCache.txt"
  "Deber1_poo_autogen"
  )
endif()
