#include <iostream>
#include <cstring>
#include "MyFriendInfo.h"
#include "MyFriendDetailInfo.h"

using namespace std;

int main()
{
	MyFriendInfo myFriend1;
	myFriend1.ShowMyFriendInfo();
	cout << endl;

	MyFriendInfo myFriend2("James", 12);
	myFriend2.ShowMyFriendInfo();
	cout << endl;

	MyFirendDetailInfo myDetail1;
	myDetail1.ShowMyFriendDetailInfo();
	cout << endl;

	MyFirendDetailInfo myDetail2("Mike", "010-1234");
	myDetail2.ShowMyFriendDetailInfo();
	cout << endl;

	MyFirendDetailInfo myDetail3(myFriend2, "Henry", "12345");
	myDetail3.ShowMyFriendDetailInfo();
	

	return 0;
}