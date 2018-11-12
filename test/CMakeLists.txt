include_directories(
  .)

file(GLOB TEST_SRC
  "*.cpp")

add_definitions(-DBOOST_TEST_DYN_LINK)

add_executable(template.test ${TEST_SRC})

target_link_libraries(template.test
  helloworld
  ${Boost_FILESYSTEM_LIBRARY}
  ${Boost_SYSTEM_LIBRARY}
  ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
