#include "camry.hpp"
#include <string>
#include <iostream>
Camry::Camry()
{
    model = std::string("Camry");
    maker = std::string("Toyota");
    make = 2022;
    currentSpeed = 0;
    maxSpeed = 180;
}
/**
 * @brief sets car speed
 *
 * @param speed
 */
void Camry::setSpeed(int speed)
{
    if (speed < maxSpeed)
        currentSpeed = speed;
}
int Camry::getSpeed()
{
    return currentSpeed;
}
std::string Camry::makeDetails()
{
    std::string temp = "Camry" + std::to_string(make) + std::string(model);
    return temp;
}

Camry::~Camry()
{
    std::cout << "Calling Camry Destructor ...\n";
}

void Camry::adjustSeatTilt(int tiltAmount)
{
    if (tiltAmount < 15)
        seatTilt = tiltAmount;
}