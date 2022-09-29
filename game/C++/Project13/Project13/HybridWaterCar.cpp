#include <iostream>
#include "HybridWaterCar.h"

using namespace std;

void HybridWaterCar::ShowCurrentGauge()
{
    std::cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << std::endl;
    std::cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << std::endl;
    std::cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << std::endl;
}

HybridWaterCar::HybridWaterCar()
    :waterGauge(0) {}

HybridWaterCar::HybridWaterCar(int water)
    :waterGauge(water) {}

HybridWaterCar::HybridWaterCar(int gasoline, int elec, int water)
    :HybridCar(gasoline, elec), waterGauge(water) {}