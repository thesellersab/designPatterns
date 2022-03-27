/**
 * @file car.hpp
 * @author Shahzad Ahmad Butt (sellerthesab@github.com)
 * @brief
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include <string>
using namespace std;
/**
 * @brief Abstract class defines class interface
 *
 */
class Car
{
protected:
    string model;
    string maker;
    int make;
    int currentSpeed;
    int maxSpeed;

public:
    virtual void setSpeed(int speed) = 0;
    virtual int getSpeed() = 0;
    virtual string makeDetails() = 0;
    virtual ~Car(){};
};
