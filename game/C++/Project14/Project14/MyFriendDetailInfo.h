#pragma once

#include "MyFriendInfo.h"

class MyFirendDetailInfo : public MyFriendInfo
{
private:
    char* addr;
    char* phone;

public:
    void ShowMyFriendDetailInfo();
    MyFirendDetailInfo();
    MyFirendDetailInfo(const char* ad, const char* pNum);
    MyFirendDetailInfo(MyFriendInfo& myFriend, const char* ad, const char* pNum);
    ~MyFirendDetailInfo();
};