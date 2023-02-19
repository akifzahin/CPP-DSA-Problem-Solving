#include "dynamicArray.h"
#include <iostream>
using namespace std;

dynamicArray::dynamicArray()
{
    data = NULL;
    size = 0;
}
dynamicArray::dynamicArray(int s)
{
    data = new int*[s];
    for(int i=0;i<s;i++)
    {
        data[i] = new int[s];
    }
    size = s;
}
dynamicArray::~dynamicArray()
{
     for (int i = 0; i < size; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}
int dynamicArray::getValue(int index1, int index2)
{
    return data[index1][index2];
}
void dynamicArray::setValue(int index1, int index2, int value)
{
    data[index1][index2] = value;
}
void dynamicArray::allocate(int s)
{

    int **newArray = new int*[s];

    for(int i=0;i<s;i++)
    {
       for(int j=0; j<s; j++)
       {
            newArray[i][j]=data[i][j];
       }
    }
    for (int i = 0; i < size; i++)
    {
        delete[] data[i];
    }
    delete[] data;

    data = newArray;
    newArray=NULL;
    size=s;

}
