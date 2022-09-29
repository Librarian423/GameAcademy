#include <iostream>
#include "Car.h"
#include "HybridCar.h"
#include "HybridWaterCar.h"

using namespace std;

int main()
{
	Car car(1);
	cout << car.GetGasGauge() << endl;

	HybridCar Hcar1(2);
	cout << Hcar1.GetElecGauge() << endl;
	cout << Hcar1.GetGasGauge() << endl;
	
	HybridCar Hcar2(1, 2);
	cout << Hcar2.GetElecGauge() << endl;
	cout << Hcar2.GetGasGauge() << endl;

	HybridWaterCar Wcar1(1);
	Wcar1.ShowCurrentGauge();

	HybridWaterCar Wcar2(1, 2, 3);
	Wcar2.ShowCurrentGauge();
	
}