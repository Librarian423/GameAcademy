#include "MyFriendInfo.h"
#include <iostream>
#include <cstring>

void MyFriendInfo::ShowMyFriendInfo()
{
    std::cout << "이름: " << name << std::endl;
    std::cout << "나이: " << age << std::endl;
}

MyFriendInfo::MyFriendInfo()
    :age(0)
{
    this->name = new char[2];
    strcpy_s(name, sizeof(char[2]), "0");
}

MyFriendInfo::MyFriendInfo(const char* name, int age)
    :age(age)
{
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

MyFriendInfo::MyFriendInfo(MyFriendInfo& myfriend)
    :age(myfriend.age)
{
    name = new char[strlen(myfriend.name) + 1];
    strcpy_s(this->name, strlen(myfriend.name) + 1, myfriend.name);
}

MyFriendInfo::~MyFriendInfo()
{
    delete name;
}