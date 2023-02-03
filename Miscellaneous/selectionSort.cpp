#include <bits/stdc++.h>
using namespace std;
void arrayInput(int arr[], int size)
{
    cout<<"Enter elements in any order:\n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}
void arrayPrint(int arr[],int size)
{
    cout<<"The elements are: \n";
    for(int i=0; i<size; i++)
    {
         cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[], int size)
{
    int minIndex;
    for(int i=0; i<size-1; i++)
    {
        minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex!=i)
        {
            swap(arr[minIndex],arr[i]);
        }
    }
    

}

int main()
{
    int arraySize;
    cout<<"Enter array size: ";
    cin>>arraySize;

    int array[arraySize];

    arrayInput(array,arraySize);
    selectionSort(array,arraySize);
    arrayPrint(array,arraySize);

};