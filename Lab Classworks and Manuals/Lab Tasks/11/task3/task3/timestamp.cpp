#include "timestamp.h"
timeStamp::timeStamp()
{
    ss = 0;
    mm = 0;
    hh = 0;
}
timeStamp::timeStamp(int s,int m, int h)
{
    ss = s;
    mm = m;
    hh = h;
}
int timeStamp::GetSS()
{
    return ss;
}
int timeStamp::GetMM()
{
    return mm;
}
int timeStamp::GetHH()
{
    return hh;
}
void Print()
{

}
timeStamp timeStamp::operator==(timeStamp t)
{

}
