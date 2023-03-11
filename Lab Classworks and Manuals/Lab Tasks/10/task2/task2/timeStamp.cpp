#include "timeStamp.h"
#include <iostream>
using namespace std;

timeStamp::timeStamp()
{
    length = 0;
    currentPos = - 1;
}
void timeStamp::MakeEmpty()
{
    length = 0;
}
bool timeStamp::IsFull()
{
    return (length == MAX_ITEMS);
}
int timeStamp::LengthIs()
{
    return length;
}
void timeStamp::ResetList()
{
    currentPos = - 1;
}
void
timeStamp::GetNextItem(int& s, int& m, int& h)
{
    currentPos++;
    s = seconds[currentPos];
    m = minutes[currentPos];
    h = hours[currentPos];
}
void timeStamp::InsertItem(int s, int m, int h)
{
    int location = 0;
    bool moreToSearch = (location < length);

    while (moreToSearch)
    {
        if(s > seconds[location] && m > minutes[location] && h > hours[location])
        {
            location++;
            moreToSearch = (location < length);
        }
        else if(s < seconds[location] && m < minutes[location] && h < hours[location])
            moreToSearch = false;
    }
    for (int index = length; index > location; index--)
    {
        seconds[index] = seconds[index - 1];
        minutes[index] = minutes[index - 1];
        hours[index] = hours[index - 1];
    }
    seconds[location] = s;
    minutes[location] = m;
    hours[location] = h;
    length++;
}
void timeStamp::DeleteItem(int s, int m, int h)
{
    int location = 0;

    while (s != seconds[location] && m!=minutes[location] && h!=hours[location])
        location++;
    for (int index = location + 1; index < length;
            index++)
    {
        seconds[index - 1] = seconds[index];
        minutes[index - 1] = minutes[index];
        hours[index - 1] = hours[index];
    }

    length--;
}
int timeStamp::RetrieveItem(int& s, bool& found)
{
    int midPoint, first = 0, last = length - 1,foundLocation=-1;
    bool moreToSearch = (first <= last);
    found = false;
    while (moreToSearch && !found)
    {
        midPoint = (first + last) / 2;
        if(s < seconds[midPoint])
        {
            last = midPoint - 1;
            moreToSearch = (first <= last);
        }
        else if(s > seconds[midPoint])
        {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        }
        else
        {
            found = true;
            //item = info[midPoint];
            foundLocation = midPoint;
        }
    }
    return foundLocation;
}
void timeStamp::PrintList()
{
    for(int i=0; i<length; i++)
    {
        cout<<"Student "<<i+1<<":";
        cout<<seconds[i]<<" "<<minutes[i]<<" "<<hours[i]<<"\n";
    }
}
