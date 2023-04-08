#include <bits/stdc++.h>
using namespace std;

void arrayPrint(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" \n";
    }
}

void bubbleSort(int arr[],int size)
{
    bool isSwapped;
    for(int i=0; i<size; i++) //GFG used i<size-1. Why?
    {
        isSwapped = false;
        for(int j=0; j<size; j++) //GFG used j<size-i-1. Why?
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwapped = true;
            }
        }

        if(isSwapped == false)
        {
            break;
        }
    }
}


int main()
{   
    int arraySize;

    cout<<"Enter array size: ";
    cin>>arraySize;

    int array[arraySize];
    
    cout<<"Enter values for the array: \n";
    for(int i=0; i<arraySize; i++)
    {
        cin>>array[i];
    }   

    cout<<"Unsorted Array:\n";
    arrayPrint(array,arraySize);

    bubbleSort(array,arraySize);

    cout<<"Sorted Array:\n";
    arrayPrint(array,arraySize);




}