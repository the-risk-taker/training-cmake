include(FetchContent)
FetchContent_Declare(Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.6.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(fetch_content)
target_sources(fetch_content PRIVATE main.cpp)
target_link_libraries(fetch_content PRIVATE math Catch2::Catch2WithMain)
