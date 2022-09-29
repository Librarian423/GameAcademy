#include <iostream>

using namespace std;

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	return length * width * 1;
}

int BoxVolume(int length)
{
	return length * 1 * 1;
}

int BoxVolume()
{
	return 1 * 1 * 1;
}


int main()
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	cout << "[D, D, D] : " << BoxVolume() << endl;
	
	//문제 2
	//매개변수의 개수가 없는 경우 이미 SimpleFunc(int a = 10)에서 처리하기 때문에 이중 선언이 된다.
	return 0;
}