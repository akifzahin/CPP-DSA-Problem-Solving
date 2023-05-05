#include "LinkedList.h"
#include "node.h"
#include <bits/stdc++.h>
using namespace std;

template <class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    lengthOfList=-1;
    currentIndex=-1;

}

template <class T>
int LinkedList<T>::GetLength()
{
    return lengthOfList;
}

template <class T>
int LinkedList<T>::GetCurrentIndex()
{
    return currentIndex;
}
template <class T>
Node* LinkedList<T>::GetHeadAddress()
{
    return head;
}
template <class T>
bool LinkedList<T>::CheckFull()
{
    bool full;
    Node<T>* temp;
    try
    {
        temp = new Node<T>;
        delete temp;
        full = false;

    }
    catch(bad_alloc)
}

template <class T>
bool LinkedList<T>::CheckEmpty()
{

}

template <class T>
void LinkedList<T>::InsertNode(int index,T value)
{


}
template <class T>
void LinkedList<T>::DeleteNode(T value)
{

}

template <class T>
void GetNode(int,T);

template <class T>
void ReverseList();

template <class T>
void PrintList();

template <class T>
void ResetList();

template <class T>
void GetSuccessiveNodes(T&);

