/**
 * @file camry.hpp
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
 * @brief Camry concrete class implements Car IF
 *
 */
class Camry : public Car
{
protected:
    int seatTilt;

public:
    virtual void setSpeed(int speed) override;
    virtual int getSpeed() override;
    virtual string makeDetails() override;
    void adjustSeatTilt(int tiltAmount);
    Camry();
    ~Camry();
};
