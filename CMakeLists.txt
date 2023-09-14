cmake_minimum_required(VERSION 3.14)
project(root LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
enable_testing()

add_subdirectory(hello)
add_subdirectory(add_library)
add_subdirectory(use_boost)
add_subdirectory(git_hash)
add_subdirectory(add_custom_target)
add_subdirectory(add_test)
add_subdirectory(fetch_content)
add_subdirectory(pch)
