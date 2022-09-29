#include <iostream>
#include "Car.h"

using namespace std;

int Car::GetGasGauge()
{
    return gasolineGauge;
}

Car::Car()
    :gasolineGauge(0) {}
Car::Car(int gasoline)
    :gasolineGauge(gasoline) {}