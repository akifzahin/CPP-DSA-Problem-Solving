#include <bits/stdc++.h>
using namespace std;
// NEEDS MORE WORK
void fasterDuplicateValues(int arr[], int size)
{
    bool hasDuplicate = false;
    int existingNumber[100];
    for (int i = 0; i < size; i++)
    {
        if (existingNumber[array[i]] == 1)
        {
            hasDuplicate = true;
        }
        else
        {
            existingNumber[array[i]] = 1;
        }
    }
    if (hasDuplicate == true)
    {
        cout << "Duplicates Found!";
    }
    else
    {
        cout << "NO!";
    }
}

void printArray(int arr[], int size)
{
    cout << "The array elements are: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}

int main()
{
    int arraySize;
    cout << "Enter array size: ";
    cin >> arraySize;

    int array[arraySize];

    cout << "Enter values for array: \n";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    printArray(array, arraySize);
    fasterDuplicateValues(array, arraySize);
}