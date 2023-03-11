#include "studentInfo.h"
#include <iostream>
using namespace std;


studentInfo::studentInfo()
{
    length = 0;
    currentPos = -1;
}
void studentInfo::MakeEmpty()
{
    length = 0;
}
bool studentInfo::IsFull()
{
    return (length == MAX_ITEMS);
}
int studentInfo::LengthIs()
{
    return length;
}
void studentInfo::ResetList()
{
    currentPos = -1;
}
void
studentInfo::GetNextItem(int& id, double& cgpa, string& name)
{
    currentPos++;
    id = ID[currentPos];
    cgpa = CGPA[currentPos];
    name = NAME[currentPos];
}
void
studentInfo::RetrieveItem(int id, bool& found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found)
    {
        if(id == ID[location])
        {
            found = true;
            cout<<"Item is found!\n";
            cout<<ID[location]<<","<<NAME[location]<<","<<CGPA[location]<<"\n";

        }
        else
        {
            location++;
            moreToSearch = (location < length);
        }
    }

}
void studentInfo::InsertItem(int id, string name, double cgpa)
{
    bool full = IsFull();
    if(full == true)
    {
        cout<<"LIST IS FULL!\n";
    }
    else
    {

        ID[length] = id;
        CGPA[length] = cgpa;
        NAME[length] = name;
        length++;
    }
}
void studentInfo::DeleteItem(int id)
{

    int location = 0;
    while (id != ID[location])
        location++;
    ID[location] = ID[length - 1];
    NAME[location] = NAME[length - 1];
    CGPA[location] = CGPA[length - 1];
    length--;

}
void studentInfo::PrintList()
{
    for(int i=0; i<length; i++)
    {
        cout<<"Student "<<i+1<<":";
        cout<<ID[i]<<" "<<NAME[i]<<" "<<CGPA[i]<<"\n";
    }
}
