#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct User
{
	string name;
	int level;
};

struct TotalLevel
{
	User operator()(const User& lhs, const User& rhs)
	{
		User temp;
		temp.level = lhs.level + rhs.level;
		return temp;
	}
};

struct CompareName
{
	bool operator()(const User& lhs, const User& rhs)
	{
		return lhs.name > rhs.name;
	}
};

struct CompareLevel
{
	bool operator()(const User& lhs, const User& rhs)
	{
		return lhs.level < rhs.level;
	}
};

struct UserPrintName
{
	void operator()(const User& user)
	{
		cout << user.name << " ";
	}
};

struct Gen
{
	int count;

	int operator()()
	{
		return count++;
	}
};



int main()
{
	vector<User> userVector;
	userVector.push_back({ "HHH",10 });
	userVector.push_back({ "AAA",20 });
	userVector.push_back({ "ZZZ",30 });

	User initUser;
	initUser.level = 0;

	User resultUser = accumulate(userVector.begin(), userVector.end(), initUser, TotalLevel());

	cout << resultUser.level << endl;

	//이름 순으로 내림차순 정렬 + 출력
	sort(userVector.begin(), userVector.end(), CompareName());
	for ( auto it : userVector )
	{
		cout << it.name << " " << it.level << endl;
	}
	cout << endl;

	sort(userVector.begin(), userVector.end(), CompareLevel());
	for ( auto it : userVector )
	{
		cout << it.name << " " << it.level << endl;
	}
	


	vector<int> vec1(6), vec2(6), vec3(12), vec4(6);
	Gen gen;
	gen.count = 0;
	generate(vec1.begin(), vec1.end(), gen);
	generate(vec4.begin(), vec4.end(), gen);
	gen.count = 3;
	generate(vec2.begin(), vec2.end(), gen);


	for ( auto number : vec1 )
	{
		cout << number << endl;
	}
	cout << endl;
	for ( auto number : vec2 )
	{
		cout << number << endl;
	}
	cout << endl;

	merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
	for ( auto number : vec3 )
	{
		cout << number << endl;
	}
	cout << endl;

	for ( auto number : vec4 )
	{
		cout << number << endl;
	}
	cout << endl;
	int result = accumulate(vec4.begin(), vec4.end(), 0);
	cout << result << endl;
	return 0;
}