#include <iostream>
#include "git_hash.hpp"

int main()
{
    std::cout << "Built from: " << GIT_HASH << "!\n";
}
