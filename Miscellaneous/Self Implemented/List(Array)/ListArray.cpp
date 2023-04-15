#include "ListArray.h"
template <class T>
ListArray<T>::ListArray()
{
    currentIndex = -1;
    lengthOfList = 0;

}
template <class T>
void ListArray<T>::GetElementByValue(T& value)
{

    for(int i=0 ; i<lengthOfList; i++)
    {
        if(elements[i] == T)
        {
            value = elements[i];
        }
        else
        {
            value = NULL;
        }
    }
}
template <class T>
int ListArray<T>::GetElementIndex(T value)
{

    int index;
    for(int i=0; i<lengthOfList; i++)
    {
        if(value == elements[i])
        {
            index = i;
        }
    }
    return index;
}
template <class T>
void ListArray<T>::GetElementByIndex(T& value,int index)
{

    value = elements[index];
}


template <class T>
int ListArray<T>:: GetLength()
{
    return lengthOfList;
}

template <class T>
int ListArray<T>::GetCurrentIndex()
{
    return currentIndex;
}
template <class T>
bool ListArray<T>::CheckEmpty()
{
    return (lengthOfList==0);
}

template <class T>
bool ListArray<T>::CheckFull()
{
    return (lengthOfList==maxSize);
}

template <class T>
ListArray<T>::MakeEmpty()
{
    lengthOfList = 0;
}

template <class T>
void ListArray<T>::ResetCurrentIndex()
{
    currentIndex = -1;
}

template <class T>
void ListArray<T>::InsertElementByValue(T value)
{
    T temp;
    GetElementByValue(temp);
    bool full = CheckFull();

    if(value==temp)
    {
        cout<<"Value exists!";
    }
    else if(full == 1)
    {
        cout<<"List full!";
    }
    else
    {
        elements[lengthOfList-1] = value;
        lengthOfList++;

    }
}
template <class T>
void ListArray<T>::InsertElementByIndex(T value,int index)
{
    T temp;
    GetElementByValue(temp);
    bool full = CheckFull();


    if(value==temp)
    {
        cout<<"Value exists!";
    }
    else if(index>=maxSize)
    {
        cout<<"Index out of bounds!";
    }
    else if(full == 1)
    {
        cout<<"List full!";
    }
    else
    {
        elements[index] = value;
        lengthOfList++;
    }

}


template <class T>
void ListArray<T>::RemoveElementByValue(T value)
{
    bool emptyy = CheckEmpty();
    int removeIndex = GetElementIndex(value);

    if(emptyy == 1)
    {
        cout<<"List Empty!";
    }
    else
    {
        elements[removeIndex]=elements[removeIndex+1];
        length--;
    }


}

template <class T>
void ListArray<T>::RemoveElementByIndex(int index)
{
    bool emptyy = CheckEmpty();
    if(emptyy == 1)
    {
        cout<<"List Empty!";
    }
    else
    {
        elements[index]=elements[index+1];
        length--;
    }

}

template <class T>
void ListArray<T>:: SortList()
{

    bool isSwapped;
    for(int i=0; i<lengthOfList; i++)
    {
        isSwapped = false;
        for(int j=0; j<lengthOfList; j++)
        {
            if(elements[j]>elements[j+1])
            {
                swap(elements[j],elements[j+1]);
                isSwapped = true;
            }
        }

        if(isSwapped == false)
        {
            break;
        }
    }

}

template <class T>
void ListArray<T>::ReverseList()
{
    for(int i=0; i<lengthOfList; i++)
    {
        elements[length-i] = elements[i];
    }
}

template <class T>
void ListArray<T>::IterateList(T& value)
{
    currentIndex++;
    value = elements[currentIndex];
}
template <class T>
void ListArray<T>::SumList()
{
    int sum=0;
    for(int i=0;i<lengthOfList;i++)
    {
        sum+=elements[i];
    }
}
