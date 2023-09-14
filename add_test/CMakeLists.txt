add_executable(add_5_plus_7)
target_sources(add_5_plus_7 PRIVATE add_5_plus_7.cpp)
target_link_libraries(add_5_plus_7 PRIVATE math)

add_test(NAME test_add_5_plus_7 COMMAND $<TARGET_FILE:add_5_plus_7>)
