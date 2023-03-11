#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"


using namespace std;

int main()
{
    SortedType<int> myList;
    cout<<"Length of list: "<<myList.LengthIs()<<"\n";

    int insertInt;
    cout<<"Enter values: ";
    for(int i=0; i<MAX_ITEMS;i++)
    {
        cin>>insertInt;
        myList.InsertItem(insertInt);
    }

    int printInt;
    cout<<"Printing list: ";
    for(int i=0; i<myList.LengthIs();i++)
    {
        myList.GetNextItem(printInt);
        cout<<printInt<<" ";
    }

    int retrieveNum = 6,location;
    bool retrieveFound;
    location = myList.RetrieveItem(retrieveNum,retrieveFound);
    if(location == -1)
    {
        cout<<"\nNOT FOUND!\n";
    }
    else
    {
        cout<<retrieveNum<<" found at index "<<location;
    }

    retrieveNum = 5;
    location = myList.RetrieveItem(retrieveNum,retrieveFound);
    if(location == -1)
    {
        cout<<"\nNOT FOUND!\n";
    }
    else
    {
        cout<<retrieveNum<<" found at index "<<location;
    }

    if(myList.IsFull() == true)
    {
        cout<<"\nList is FULL!\n";
    }
    else
    {
        cout<<"\nList is NOT FULL!\n";
    }

    myList.ResetList();
    int deleteOne = 1;
    myList.DeleteItem(deleteOne);

    cout<<"Printing list: ";
    for(int i=0; i<myList.LengthIs();i++)
    {
        myList.GetNextItem(printInt);
        cout<<printInt<<" ";
    }

    if(myList.IsFull() == true)
    {
        cout<<"\nList is FULL!\n";
    }
    else
    {
        cout<<"\nList is NOT FULL!\n";
    }





}
