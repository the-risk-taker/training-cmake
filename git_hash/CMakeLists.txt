execute_process(
    COMMAND git rev-parse --short HEAD
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    OUTPUT_VARIABLE GIT_HASH
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

configure_file(git_hash.cpp.in git_hash.cpp @ONLY)

add_executable(git_hash)
target_sources(git_hash PRIVATE main.cpp git_hash.hpp ${CMAKE_CURRENT_BINARY_DIR}/git_hash.cpp)
target_include_directories(git_hash PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
