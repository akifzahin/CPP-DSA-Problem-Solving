#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "timestamp.h"

using namespace std;

int main()
{
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    UnsortedType<timeStamp> list1;

    list1.InsertItem(t1);
    list1.InsertItem(t2);
    list1.InsertItem(t3);
    list1.InsertItem(t4);
    list1.InsertItem(t5);

    list1.DeleteItem(t4);

    timeStamp temp;

    for(int i=0; i<5; i++)
    {
        list1.GetNextItem(temp);
        temp.Print();
    }


}
