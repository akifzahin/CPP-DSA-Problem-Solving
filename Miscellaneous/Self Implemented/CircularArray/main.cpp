#include <iostream>

using namespace std;
void printArray(int arr[],int n, int index)
{
    int tempArray[2*n];

    for(int i=0; i<n; i++)
    {
        tempArray[i] = tempArray[n+i] = arr[i];

    }
    for(int i=index; i<n+index; i++)
    {
        cout<<tempArray[i]<<" ";
    }
}

int main()
{
   int n = 8;
   int circularArr[n];
   cout<<"Enter items: \n";
   for(int i=0; i<n; i++)
   {
       cin>>circularArr[i];
   }
    int startIndex = 4;
    printArray(circularArr,n,startIndex);
}

