/**
 * @file prius.hpp
 * @author Shahzad Ahmad Butt (thesellersab@github.com)
 * @brief
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#pragma once
#include "car.hpp"
/**
 * @brief prius concrete class implements Car IF
 *
 */
class Prius : public Car
{
protected:
    int batteryLevel;

public:
    virtual void setSpeed(int speed) override;
    virtual int getSpeed() override;
    virtual string makeDetails() override;
    int getBatteryLevel();
    Prius();
    ~Prius();
};
