#include <iostream>
#include "timeStamp.h"
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<timeStamp> timeStamps;

    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    timeStamps.InsertItem(t1);
    timeStamps.InsertItem(t2);
    timeStamps.InsertItem(t3);
    timeStamps.InsertItem(t4);
    timeStamps.InsertItem(t5);

//    timeStamps.DeleteItem(t4);

   timeStamp temp(0,0,0);
   bool found;

   for(int i=0; i<5; i++)
   {
       timeStamps.RetrieveItem(temp,found);
       temp.printTime();
   }

}
