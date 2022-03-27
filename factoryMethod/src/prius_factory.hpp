#include "car_factory.hpp"
#include "prius.hpp"
class PriusFactory : public CarFactory
{
    Car *createCar(int maxSpeed) override;
};