#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> myList;
    int n=4,input;

    cout<<"Enter values:  \n";
    for(int i=0; i<n; i++)
    {
        cin>>input;
        myList.InsertItem(input);
    }

    cout<<"Printing items: \n";
    int size = myList.LengthIs();
    for(int i=0; i<size; i++)
    {
        cout<<myList.GetNextItem(2);

    }

}
