#include <bits/stdc++.h>
using namespace std;
//Recursive Approach

int binarySearch(int arr[],int value, int lower, int upper)
{   
 

    if(upper>=lower)
    {
        
        int midBound = (lower + upper)/2;
       
        if(arr[midBound] == value)
        {
            return midBound;
        }
        else if(value < arr[midBound])
        {
            return binarySearch(arr,value,lower,midBound-1);
        }
        else if(value > arr[midBound])
        {
            return binarySearch(arr,value,midBound+1,upper);
        }
        
    }

    return -1;
}


int main()
{   
   
    int arraySize;

    cout<<"Enter array size: \n";
    cin>>arraySize;
    
    int array[arraySize];
   
    cout<<"Enter numbers in order: \n";
    for(int i=0; i<arraySize; i++)
    {
        cin>>array[i];
       
    }

    int searchKey;
    cout<<"Enter search value: \n";
    cin>>searchKey;

    int lower = 0;
    int upper = arraySize-1;
    
    int index = binarySearch(array,searchKey,lower,upper); 
   
    if(index == -1)
    {
        cout<<"Value not found!";
    }
    else
    {
        cout<<"Value of: "<<searchKey<<" found at index "<<index;
    }



}