#include <iostream>

#include "camry_factory.hpp"
#include "prius_factory.hpp"

int main(int, char **)
{
    Camry cam;
    std::cout << "Hello, world!\n";
    cam.adjustSeatTilt(13);
    std::cout << cam.makeDetails() << std::endl;
    return -1;
}
