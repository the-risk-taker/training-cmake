add_executable(custom_target)
target_sources(custom_target PRIVATE main.cpp)

find_program(CPPCHECK cppcheck)
if(CPPCHECK)
    message(STATUS "Cppcheck found use 'run-cppcheck' target to run analysis")
    add_custom_target(run-cppcheck COMMAND ${CPPCHECK} --project=${CMAKE_BINARY_DIR}/compile_commands.json --enable=all --suppress=missingIncludeSystem
        COMMENT "Running Cppcheck"
        USES_TERMINAL
    )
endif()
