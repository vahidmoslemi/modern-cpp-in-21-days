# Aggregator — build every sample project for this day at once, each in its own isolated
# build/ folder (one failure never stops the others). Prints a summary of any that failed,
# by path (also in build-report.txt in this build directory).
#
#   cmake -S implementations/day01 -B implementations/day01/build
#   cmake --build implementations/day01/build

cmake_minimum_required(VERSION 3.25)
project(day01_all NONE)

add_custom_target(build_all ALL
  COMMAND "${CMAKE_COMMAND}"
          -DSCAN_DIR=${CMAKE_CURRENT_SOURCE_DIR}
          -DREPORT_FILE=${CMAKE_CURRENT_BINARY_DIR}/build-report.txt
          -P ${CMAKE_CURRENT_SOURCE_DIR}/../cmake/build_all.cmake
  USES_TERMINAL VERBATIM
  COMMENT "Building every sample project under ${CMAKE_CURRENT_SOURCE_DIR}")
