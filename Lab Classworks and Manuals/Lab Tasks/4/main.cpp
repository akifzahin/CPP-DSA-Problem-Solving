#include <iostream>
#include "dynamicArray.h"

using namespace std;
int main()
{
    dynamicArray array1();
    dynamicArray array2 = dynamicArray(5);

    cout<<"Enter values: \n";
    int n;
    for(int i=0; i<5; i++)
    {
        cin>>n;
        array2.setValue(i,n);
    }
    cout<<"Printing values: \n";
    for(int i=0; i<5; i++)
    {
        cout<<array2.getValue(i)<<" ";
    }

}
