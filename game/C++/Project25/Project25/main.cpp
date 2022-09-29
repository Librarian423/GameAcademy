#include <iostream>
#include <vector>
using namespace std;

struct RoomUser
{
	int charID;
	int level;
};


int main(void)
{
	RoomUser user1 { 0,1 };
	RoomUser user2 { 2,3 };
	RoomUser user3 { 4,5 };

	vector<RoomUser> roomUsers;
	roomUsers.push_back(user1);
	roomUsers.push_back(user2);
	roomUsers.push_back(user3);

	int size = roomUsers.size();
	cout << size << endl;

	int cap = roomUsers.capacity();
	cout << cap << endl;

	for ( vector<RoomUser>::iterator it = roomUsers.begin(); it != roomUsers.end(); it++ )
	{
		cout << it->charID << " ";
		cout << it->level << endl;
	}
	cout << endl;

	for ( auto it = roomUsers.begin(); it != roomUsers.end(); it++ )
	{
		cout << it->charID << " ";
		cout << it->level << endl;
	}
	cout << endl;

	for ( const RoomUser& v : roomUsers )
	{
		cout << v.charID << " ";
		cout << v.level << endl;
	}
	cout << endl;

	for ( const auto& v:roomUsers )
	{
		cout << v.charID << " ";
		cout << v.level << endl;
	}
	cout << endl;

	for ( vector<RoomUser>::reverse_iterator it = roomUsers.rbegin(); it != roomUsers.rend(); it++ )
	{
		cout << it->charID << " ";
		cout << it->level << endl;
	}
	cout << endl;

	for ( auto it = roomUsers.rbegin(); it != roomUsers.rend(); it++ )
	{
		cout << it->charID << " ";
		cout << it->level << endl;
	}
	cout << endl;

	RoomUser& ref1 = roomUsers.front();
	ref1.charID = 101;
	ref1.level = 99;
	for ( int i = 0; i < size; i++ )
	{
		cout << roomUsers[i].charID << " ";
		cout << roomUsers[i].level << endl;
	}
	cout << endl;

	//RoomUser& ref2 = roomUsers.at(1);
	RoomUser& ref2 = roomUsers[1];
	ref2.charID = 10;
	ref2.level = 9;
	for ( int i = 0; i < size; i++ )
	{
		cout << roomUsers[i].charID << " ";
		cout << roomUsers[i].level << endl;
	}
	cout << endl;

	RoomUser& ref3 = roomUsers.back();
	ref3.charID = 132;
	ref3.level = 12;
	for ( int i = 0; i < size; i++ )
	{
		cout << roomUsers[i].charID << " ";
		cout << roomUsers[i].level << endl;
	}
	cout << endl;

	roomUsers.pop_back();
	cout << roomUsers.size() << endl << endl;
	for ( int i = 0; i < roomUsers.size(); i++ )
	{
		cout << roomUsers[i].charID << " ";
		cout << roomUsers[i].level << endl;
	}
	cout << endl;

	if ( !roomUsers.empty() )
	{
		roomUsers.clear();
	}
	cout << roomUsers.size() << endl;

	return 0;
}