include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(helloworld SHARED hello_world.cpp ${CMAKE_SOURCE_DIR}/include/hello_world.hpp)

set_target_properties(helloworld PROPERTIES
  VERSION ${PROJECT_VERSION}
  SOVERSION 1)

install(TARGETS helloworld
  LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/bin)
