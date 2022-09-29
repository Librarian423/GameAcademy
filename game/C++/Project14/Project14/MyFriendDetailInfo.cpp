#include "MyFriendDetailInfo.h"
#include <iostream>
#include <cstring>

void MyFirendDetailInfo::ShowMyFriendDetailInfo()
{
    ShowMyFriendInfo();
    std::cout << "주소: " << addr << std::endl;
    std::cout << "전화: " << phone << std::endl;
}

MyFirendDetailInfo::MyFirendDetailInfo()
{
    addr = new char[2];
    phone = new char[2];
    strcpy_s(addr, sizeof(char[2]), "0");
    strcpy_s(phone, sizeof(char[2]), "0");
}

MyFirendDetailInfo::MyFirendDetailInfo(const char* ad, const char* pNum)
{
    addr = new char[strlen(ad) + 1];
    phone = new char[strlen(pNum) + 1];

    strcpy_s(addr, strlen(ad)+1, ad);
    strcpy_s(phone, strlen(pNum)+1, pNum);
}
MyFirendDetailInfo::MyFirendDetailInfo(MyFriendInfo& myFriend, const char* ad, const char* pNum)
    :MyFriendInfo(myFriend)
{
    addr = new char[strlen(ad) + 1];
    phone = new char[strlen(pNum) + 1];
    strcpy_s(addr, strlen(ad) + 1, ad);
    strcpy_s(phone, strlen(pNum) + 1, pNum);
}

MyFirendDetailInfo::~MyFirendDetailInfo()
{
    delete addr;
    delete phone;
}