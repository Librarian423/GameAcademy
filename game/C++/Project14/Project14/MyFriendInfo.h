#pragma once

class MyFriendInfo
{
private:
    char* name;
    int age;

public:
    void ShowMyFriendInfo();
    MyFriendInfo();
    MyFriendInfo(const char* name, int age);
    MyFriendInfo(MyFriendInfo& myfriend);
    ~MyFriendInfo();
};