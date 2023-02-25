#include "dynamicArray.h"
#include <iostream>
using namespace std;
template<class T>
dynamicArray<T>::dynamicArray()
{
    data = NULL;
    size = 0;
}
template<class T>
dynamicArray<T>::dynamicArray(int s)
{
    data = new T*[s];
    for(int i=0;i<s;i++)
    {
        data[i] = new T[s];
    }
    size = s;
}
template<class T>
dynamicArray<T>::~dynamicArray()
{
     for (int i = 0; i < size; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}
template<class T>
T dynamicArray<T>::getValue(int index1, int index2)
{
    return data[index1][index2];
}
template<class T>
void dynamicArray<T>::setValue(int index1, int index2, T value)
{
    data[index1][index2] = value;
}
template<class T>
void dynamicArray<T>::allocate(int s)
{

    T **newArray = new T*[s];

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
