#pragma once
#include "FriuitSeller.h"

class FruitBuyer
{
	int myMoney;		// private:
	int numOfApples;	// private:

public:
	void InitMembers(int money);

	void BuyApples(FruitSeller& seller, int money);

	void ShowBuyResult();

};
