#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "timestamp.h"
#include "timestamp.cpp"


using namespace std;

int main()
{


    TimeStamp t1 = TimeStamp(15,34,23);
    TimeStamp t2 = TimeStamp(13,13,02);
    TimeStamp t3 = TimeStamp(43,45,12);
    TimeStamp t4 = TimeStamp(25,36,17);
    TimeStamp t5 = TimeStamp(52,02,20);

    UnsortedType<TimeStamp> list1;

    list1.InsertItem(t1);
    list1.InsertItem(t2);
    list1.InsertItem(t3);
    list1.InsertItem(t4);
    list1.InsertItem(t5);

    list1.DeleteItem(t4);

    TimeStamp temp(0,0,0);

    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(temp);
        cout<<temp.GetSS();
        cout<<temp.GetMM();
        cout<<temp.GetHH();
    }

}
