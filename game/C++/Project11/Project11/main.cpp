#include <iostream>
#include <cstring>
#include "NameCard.h"

using namespace std;

int main(void)
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSenior("Hong", "OrangeEng", "010-2222-3333", COMP_POS::SENIOR);
    NameCard copy2 = manSenior;
    //NameCard manAssist("Kim", "SoGoodComp", "010-3333-4444", COMP_POS::ASSIST);

    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    //manAssist.ShowNameCardInfo();

    return 0;
}