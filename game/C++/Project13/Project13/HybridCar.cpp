#include <iostream>
#include "HybridCar.h"

using namespace std;

int HybridCar::GetElecGauge()
{
    return electricGauge;
}

HybridCar::HybridCar()
    :electricGauge(0) {}

HybridCar::HybridCar(int elec)
    :electricGauge(elec) {}

HybridCar::HybridCar(int gasoline, int elec)
    :Car(gasoline), electricGauge(elec) {}