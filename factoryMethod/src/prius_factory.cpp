#include "prius_factory.hpp"
Car *PriusFactory::createCar(int maxSpeed)
{
    return new Prius();
}
