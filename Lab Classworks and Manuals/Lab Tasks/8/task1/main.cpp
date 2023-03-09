#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> myList;
    int n1=MAX_ITEMS-1,input;

    cout<<"Enter values:  \n";
    for(int i=0; i<n1; i++)
    {
        cin>>input;
        myList.InsertItem(input);
    }

    cout<<"Printing items: \n";
    int size1 = myList.LengthIs();
    int n2;
    for(int i=0; i<size1; i++)
    {
        myList.GetNextItem(n2);
        cout<<n2<<" ";

    }
    myList.ResetList();
    cout<<"\nLength of list: \n"<<size1;

    int newInsert = 1;
    myList.InsertItem(newInsert);

    cout<<"\nPrinting items: \n";
    int size2 = myList.LengthIs();
    int n3;
    for(int i=0; i<size2; i++)
    {
        myList.GetNextItem(n3);
        cout<<n3<<" ";

    }

    bool fourFound;
    int four = 4;
    int locationOfFour = myList.RetrieveItem(four,fourFound);
    if(locationOfFour != 0)
    {
        cout<<"\n4 found at location "<<locationOfFour;
    }
    else
    {
        cout<<"\n"<<four<<" not found!";
    }

    bool fiveFound;
    int five = 5;
    int locationOfFive = myList.RetrieveItem(five,fiveFound);
    if(locationOfFive != 0)
    {
        cout<<"\n4 found at location "<<locationOfFive;
    }
    else
    {
        cout<<"\n"<<five<<" not found!";
    }

    bool nineFound;
    int nine = 9;
    int locationOfNine= myList.RetrieveItem(nine,nineFound);
    if(locationOfNine != 0)
    {
        cout<<"\n4 found at location "<<locationOfNine;
    }
    else
    {
        cout<<"\n"<<nine<<" not found!";
    }

    bool tenFound;
    int ten = 10;
    int locationOfTen = myList.RetrieveItem(ten,tenFound);
    if(locationOfTen != 0)
    {
        cout<<"\n4 found at location "<<locationOfTen;
    }
    else
    {
        cout<<"\n"<<ten<<" not found!";
    }

    bool ListFull1 = myList.IsFull();
    if(ListFull1 == true)
    {
        cout<<"\nLIST IS FULL SORRY!\n";
    }
    else
    {
        cout<<"\nList is NOT FULL!\n";
    }

    int deleteFive = 5;
    myList.DeleteItem(deleteFive);

     bool ListFull2 = myList.IsFull();
    if(ListFull2 == true)
    {
        cout<<"\nLIST IS FULL SORRY!\n";
    }
    else
    {
        cout<<"\nList is NOT FULL!\n";
    }


    int deleteOne = 1;
    myList.DeleteItem(deleteOne);

    bool ListFull3 = myList.IsFull();
    if(ListFull3 == true)
    {
        cout<<"\nLIST IS FULL SORRY!\n";
    }
    else
    {
        cout<<"\nList is NOT FULL!\n";
    }








}
