#include <iostream>
#include "timeStamp.h"


using namespace std;

int main()
{
    timeStamp timeStamps;

    timeStamps.InsertItem(15,34,23);
    timeStamps.InsertItem(13,13,02);
    timeStamps.InsertItem(43,45,12);
    timeStamps.InsertItem(25,36,17);
    timeStamps.InsertItem(52,02,20);

    timeStamps.DeleteItem(25,36,17);

    timeStamps.PrintList();

}
