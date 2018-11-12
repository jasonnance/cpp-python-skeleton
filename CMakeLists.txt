cmake_minimum_required(VERSION 3.12.4)
project(c++-python-skeleton
  VERSION 0.0.1
  DESCRIPTION "Skeleton for a Python script calling functions from a C++ library")

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-pragma-once-outside-header -std=c++17")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(Boost 1.68.0 COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories(
  ${CMAKE_SOURCE_DIR}/include
  ${Boost_INCLUDE_DIRS})

add_subdirectory(src)
add_subdirectory(test)

enable_testing()
include(CTest)
add_test(NAME Tests COMMAND template.test)
