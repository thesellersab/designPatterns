#include "camry_factory.hpp"
Car *CamryFactory::createCar(int maxSpeed)
{
    return new Camry();
}
