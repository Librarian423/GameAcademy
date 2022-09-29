#pragma once

#include "HybridCar.h"

class HybridWaterCar : public HybridCar
{
private:
    int waterGauge;

public:
    void ShowCurrentGauge();
    HybridWaterCar();
    HybridWaterCar(int water);
    HybridWaterCar(int gasoline, int elec, int water);
};