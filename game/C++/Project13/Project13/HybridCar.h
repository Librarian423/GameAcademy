#pragma once

#include "Car.h"

class HybridCar : public Car
{
private:
    int electricGauge;

public:
    int GetElecGauge();
    HybridCar();
    HybridCar(int elec);
    HybridCar(int gasoline, int elec);
};