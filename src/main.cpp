#include <iostream>
#include <string>
#include "VanEck.hpp"

int main(int argc,char* argv[]) {
    VanEck obj(20);

    std::cout << "----------------------------------" << std::endl;

    for (int i = 0; i < 20; ++i)
        std::cout << obj.get(i) << ", ";
    std::cout << std::endl;

    std::cout << "----------------------------------" << std::endl;

    return 0;
}
