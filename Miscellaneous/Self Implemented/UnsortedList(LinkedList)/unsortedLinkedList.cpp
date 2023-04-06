#include "unsortedLinkedList.h"
#include <bits/stdc++.h>
using namespace std;

template <class T>
UnsortedLinkedList<T>::UnsortedLinkedList()
{
    lengthOfList = 0;
    currentIndex = -1;
    head = NULL;
}

template <class T>
int UnsortedLinkedList<T>::GetLength()
{
    return lengthOfList;
}

template <class T>
int UnsortedLinkedList<T>::GetCurrentIndex()
{
    return currentIndex;
}

template <class T>
bool UnsortedLinkedList<T>::FullCheck()
{
    bool created;
    Node<T>* temp;
    try
    {
        temp = new Node<T>;
        delete temp;
        created = false;
    }
    catch(bad_alloc& ex)
    {
        created = true;
    }
    return created;
}

template <class T>
bool UnsortedLinkedList<T>::EmptyCheck()
{
    return (head == NULL);
}

template <class T>
void UnsortedLinkedList<T>::InsertNode(int index,T value)
{
//    Node<T>* temp = new Node<T>;
//    if(index<0)
//    {
//        cout<<"Index cannot be less than 0!";
//
//    }
//    else
//    {
//        temp.data = value;
//        temp.next = head;
//        head = temp;
//        currentIndex++;
//        length++
//    }
    if (index < 0)
    {
        return NULL;
    }
    int currIndex	=	1;
    Node<T>* currNode	=	head;
    while (currNode && index > currIndex)
    {
        currNode	=	currNode->next;
        currIndex++;
    }
    if (index > 0 && currNode == NULL)
    {
         return NULL;
    }


    Node<T>* newNode	=	new	Node<T>;
    newNode->data	=	x;
    if (index == 0)
    {
        newNode->next	=	head;
        head		=	newNode;
    }
    else
    {
        newNode->next	=	currNode->next;
        currNode->next	=	newNode;
    }
    return newNode;

}
template <class T>
void UnsortedLinkedList<T>::DeleteNode(T value)
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

