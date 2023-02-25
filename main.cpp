#include <iostream>
#include "dynamicArray.h"
#include "dynamicArray.cpp"

using namespace std;
int main()
{
    /*
    dynamicArray array1();
    dynamicArray array2 = dynamicArray(5);


    cout<<"Enter values: \n";
    int n1;
    for(int i=0; i<5; i++)
    {
        cin>>n1;
        array2.setValue(i,n1);
    }
    cout<<"Printing values: \n";
    for(int i=0; i<5; i++)
    {
        cout<<array2.getValue(i)<<" ";
    }


    cout<<"\nEnter size: ";
    int newSize;
    cin>>newSize;
    array2.allocate(newSize);

    cout<<"Enter values: \n";
    int n2;
    for(int i=0; i<newSize; i++)
    {
        cin>>n2;
        array2.setValue(i,n2);
    }
    cout<<"Printing values: \n";
    for(int i=0; i<newSize; i++)
    {
        cout<<array2.getValue(i)<<" ";
    }

    int evenSize;
    cout<<"Enter size: ";
    cin>>evenSize;

    dynamicArray twoDArray = dynamicArray(evenSize);
    int value;
    cout<<"Enter values: \n";
    for(int i=0; i<evenSize; i++)
    {
        for(int j=0; j<evenSize; j++)
        {
            cin>>value;
            twoDArray.setValue(i,j,value);
        }
    }
    cout<<"Printing values: \n";
    for(int i=0; i<evenSize; i++)int value;
    cout<<"Enter values: \n";
    for(int i=0; i<evenSize; i++)
    {
        for(int j=0; j<evenSize; j++)
        {
            cin>>value;
            twoDArray.setValue(i,j,value);
        }
    }
    cout<<"Printing values: \n";
    for(int i=0; i<evenSize; i++)
    {
        for(int j=0; j<evenSize; j++)
        {

            cout<<twoDArray.getValue(i,j)<<" ";
        }
        cout<<"\n";
    }
    {
        for(int j=0; j<evenSize; j++)
        {

            cout<<twoDArray.getValue(i,j)<<" ";
        }
        cout<<"\n";
    }
    */
    dynamicArray<double> dArray(3);
    double value;
    cout<<"Enter values: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>value;
            dArray.setValue(i,j,value);
        }
    }
    cout<<"Printing values: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {

            cout<<dArray.getValue(i,j)<<" ";
        }
        cout<<"\n";
    }

}
