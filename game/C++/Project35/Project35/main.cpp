#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct User
{
	int id;
	int money;
	int level;
};

struct FindMoneyUser
{
	int compareMoney;
	
	bool operator()(const User& user)
	{
		return user.money <= compareMoney;
	}
};

struct UserTotalMoney
{
	void operator()(const User& user)
	{
		cout << user.id << " " << user.money << " " << user.level << endl;
	}
};

struct GenerateUser
{
	int count = 0;
	User operator()()
	{
		User user;
		user.id = ++count;
		user.money = 100;
		user.level = 100;
		return user;
	}
};

int main()
{
	vector<User> userVector;
	userVector.push_back({ 0,1,2 });
	userVector.push_back({ 0,3,4 });
	userVector.push_back({ 0,5,6 });

	for_each(userVector.begin(), userVector.end(), UserTotalMoney());

	generate(userVector.begin(), userVector.end(), GenerateUser());
	for_each(userVector.begin(), userVector.end(), UserTotalMoney());
	cout << endl;
	vector<User> copyuserVector(userVector.size());
	copy(userVector.begin(), userVector.end(), copyuserVector.begin());
	for_each(copyuserVector.begin(), copyuserVector.end(), UserTotalMoney());




	FindMoneyUser findOption;
	findOption.compareMoney = 4;

	auto it = find_if(userVector.begin(), userVector.end(), FindMoneyUser());

	//if ( it != userVector.end() )
	//{

	//}
	//else
	//{

	//}

}