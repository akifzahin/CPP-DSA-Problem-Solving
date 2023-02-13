#include <iostream>

using namespace std;
void printArray(int *arr,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int *userArray = new int[size];

    cout<<"Enter values: "<<"\n";
    for(int i=0; i<size; i++)
    {
        cin>>userArray[i];

    }

    cout<<"Printing values: "<<"\n";
    printArray(userArray,size);

    delete [] userArray;



}
