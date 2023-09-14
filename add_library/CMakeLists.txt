add_library(math)
target_sources(math PRIVATE lib.hpp lib.cpp)
target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(use_math)
target_sources(use_math PRIVATE main.cpp)
target_link_libraries(use_math math)
