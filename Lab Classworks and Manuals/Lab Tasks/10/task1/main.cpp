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

    int retrieveNum = 6,location;;
    bool retrieveFound;

    location = myList.RetrieveItem(retrieveNum,retrieveFound);
    cout<<"\n"<<location;




}
