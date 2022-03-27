#include "car.hpp"
class CarFactory
{
    virtual Car *createCar(int maxSpeed) = 0;
};