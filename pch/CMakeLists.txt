add_library(pch STATIC)
target_sources(pch PRIVATE pch.cpp)
target_precompile_headers(pch PUBLIC pch.hpp)

# target_precompile_headers(different_target REUSE_FROM pch)
