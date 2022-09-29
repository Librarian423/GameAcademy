#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class User
{
public:
	User(int id = -1, string name = "", int level = 0)
		: id(id), name(name), level(level) {}
	~User() {};

	void write(ofstream& os)
	{
		os.write((char*)&id, sizeof(id));
		int size = name.size();
		os.write((char*)&size, sizeof(size));
		os.write(name.c_str(),size);
		os.write((char*)&level, sizeof(level));
	}
	void read(ifstream& is)
	{
		is.read((char*)&id, sizeof(id));
		int size = 0;
		is.read((char*)&size, sizeof(size));
		char* buffer = new char[size + 1];
		memset(buffer, 0, size + 1);
		is.read(buffer, size);
		is.read((char*)&level, sizeof(level));

		name = buffer;
		delete[]buffer;
	}
	friend ostream& operator<<(ostream& os, const User& user);
	friend istream& operator>>(istream& os, User& user);

private:
	int id;
	string name;
	int level;
};

ostream& operator<<(ostream& os, const User& user)
{
	os << user.id << ' ' << user.name << ' ' << user.level;
	return os;
}

istream& operator>>(istream& is, User& user)
{
	is >> user.id >> user.name >> user.level;
	return is;
}

int main(int argc, char* argv[])
{
	/*int buffer[] { 10,20,30,40,50 };
	ofstream ofs("test.dat", ofstream::binary);

	if ( !ofs )
	{
		return -1;
	}

	ofs.write((char*)buffer, sizeof(buffer));*/

	/*int buffer[5];
	ifstream ifs("test.dat", ifstream::binary);
	if ( !ifs )
	{
		return -1;
	}
	ifs.read((char*)buffer, sizeof(buffer));

	for ( auto num : buffer )
	{
		cout << num << endl;
	}*/

	/*ofstream ofs("test.dat", ofstream::binary);
	if ( !ofs )
	{
		exit(-1);
	}
	int data;
	for ( int i = 0; i < 100; i++ )
	{
		data = rand();
		cout << data << " ";
		ofs.write((char*)&data, sizeof(data));
	}
	cout << endl;
	ofs.close();

	ifstream ifs("test.dat", ifstream::binary);
	if ( !ifs )
	{
		exit(-1);
	}
	ifs.seekg(0, ios::end);
	int size = ifs.tellg();
	cout << "size: " << size << endl;

	ifs.seekg(size / 2, ios::beg);
	ifs.read((char*)&data, sizeof(data));
	cout << data << endl;*/

	vector<User*> vec;
	//vector<User*> inVec;
	vec.push_back(new User(1, "ABC", 10));
	vec.push_back(new User(2, "BBB", 50));
	vec.push_back(new User(3, "CCC", 100));
	vec.push_back(new User(4, "DDD", 999));

	ofstream ofs("users.dat", ios::binary);
	if ( !ofs )
	{
		exit(-1);
	}
	int size = vec.size();
	ofs.write((char*)&size, sizeof(size));

	for ( auto ptr : vec )
	{
		ptr->write(ofs);
	}
	ofs.close();

	for ( auto ptr : vec )
	{
		delete ptr;
	}
	vec.clear();

	ifstream ifs("users.dat", ios::binary);
	int count;
	ifs.read((char*)&count, sizeof(count));
	for ( int i = 0; i < count; i++ )
	{
		User* user = new User;
		user->read(ifs);
		vec.push_back(user);
	}
	for ( auto ref : vec )
	{
		cout << *ref << endl;
	}
	for ( auto ref : vec )
	{
		delete ref;
	}

	/*for ( auto ref : vec )
	{
		cout << *ref << endl;
		ofs << *ref << endl;
	}
	ofs.close();

	ifstream ifs("users.dat");
	if ( !ifs )
	{
		exit(-1);
	}
	User buffer;
	while ( ifs >> buffer )
	{
		vec.push_back(new User(buffer));
		cout << buffer << endl;
	} 
	cout << endl;
	for ( auto ref : vec )
	{
		cout << *ref << endl;
	}
*/

	return 0;
}