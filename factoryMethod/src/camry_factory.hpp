#include "camry.hpp"
#include "car_factory.hpp"
class CamryFactory : public CarFactory
{
    Car *createCar(int maxSpeed) override;
};