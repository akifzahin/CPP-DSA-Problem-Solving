#include <bits/stdc++.h>
using namespace std;

void arrayInput(int arr[], int size)
{
    cout << "Enter elements in any order:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void arrayPrint(int arr[], int size)
{
    cout << "The elements are: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertionSort(int arr[], int size)
{
    int value, j;
    for (int i = 0; i < size; i++)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            // arr[j+1] = arr[j];
            swap(arr[j], arr[j + 1]);
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}

int main()
{
    int arraySize;
    cout << "Enter array size: ";
    cin >> arraySize;

    int array[arraySize];

    arrayInput(array, arraySize);
    insertionSort(array, arraySize);
    arrayPrint(array, arraySize);
};