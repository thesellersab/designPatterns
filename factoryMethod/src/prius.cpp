#include "prius.hpp"
#include <string>
#include <iostream>
Prius::Prius()
{
    model = std::string("Prius");
    maker = std::string("Toyota");
    make = 2022;
    currentSpeed = 0;
    maxSpeed = 120;
    batteryLevel = 100;
}
/**
 * @brief sets car speed
 *
 * @param speed
 */
void Prius::setSpeed(int speed)
{
    if (speed < maxSpeed)
        currentSpeed = speed;
}
int Prius::getSpeed()
{
    return currentSpeed;
}
std::string Prius::makeDetails()
{
    std::string temp = "Prius" + std::to_string(make) + std::string(model);
    return temp;
}
int Prius::getBatteryLevel()
{
    return batteryLevel;
}
Prius::~Prius()
{
    std::cout << "Calling Prius Destructor ...\n";
}
