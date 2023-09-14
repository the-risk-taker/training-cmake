#include <catch2/catch_test_macros.hpp>
#include "lib.hpp"
#include <vector>

TEST_CASE("Sum 5 and 7", "[5+7]")
{
    math math;
    REQUIRE(math.add(5, 7) == 12);
}

TEST_CASE("Sum 7 and 7", "[7+7]")
{
    math math;
    REQUIRE(math.add(7, 7) == 14);
}
