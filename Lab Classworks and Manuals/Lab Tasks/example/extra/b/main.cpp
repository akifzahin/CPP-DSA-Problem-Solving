#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    Test t1(18,"Kuddus",12);
    Test t2 = t1;
    Test t3;
    t3 = t1 + t2;
    t3.print();
}
