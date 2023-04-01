#include "timestamp.h"
TimeStamp::TimeStamp(int s, int m, int h)
{
    ss = s;
    mm = m;
    hh = h;
}
int TimeStamp::GetSS()
{
    return ss;
}
int TimeStamp::GetMM()
{
    return mm;
}

int TimeStamp::GetHH()
{
    return hh;
}

