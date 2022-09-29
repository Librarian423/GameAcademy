#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> intSet;
	intSet.insert(60);
	intSet.insert(50);
	intSet.insert(40);
	intSet.insert(30);
	intSet.insert(20);
	intSet.insert(10);

	for ( auto& v : intSet )
	{
		cout << v << endl;
	}
	intSet.erase(10);
	auto it = intSet.find(20);
	if ( it != intSet.end() )
	{
		cout << *it << endl;
	}
	for ( auto& v : intSet )
	{
		cout << v << endl;
	}
}