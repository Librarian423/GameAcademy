#include <iostream>
#include "HybridWaterCar.h"

using namespace std;

void HybridWaterCar::ShowCurrentGauge()
{
    std::cout << "�ܿ� ���ָ�: " << GetGasGauge() << std::endl;
    std::cout << "�ܿ� ���ⷮ: " << GetElecGauge() << std::endl;
    std::cout << "�ܿ� ���ͷ�: " << waterGauge << std::endl;
}

HybridWaterCar::HybridWaterCar()
    :waterGauge(0) {}

HybridWaterCar::HybridWaterCar(int water)
    :waterGauge(water) {}

HybridWaterCar::HybridWaterCar(int gasoline, int elec, int water)
    :HybridCar(gasoline, elec), waterGauge(water) {}