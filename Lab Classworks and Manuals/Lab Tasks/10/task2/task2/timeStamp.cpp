#include "timeStamp.h"
#include <iostream>
using namespace std;

    timeStamp::timeStamp(int s,int m, int h)
    {
        s = ss;
        m = mm;
        h = hh;
    }

    int timeStamp::getSS()
    {
        return ss;
    }
    int timeStamp::getMM()
    {
        return mm;
    }
    int timeStamp::getHH()
    {
        return hh;
    }

    void timeStamp::printTime()
    {
        cout<<"Time is: "<<ss<<" "<<mm<<" "<<hh<<" ";
    }

