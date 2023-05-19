#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;


LinkedList::LinkedList()
{
    head = NULL;
    lengthOfList=-1;
    currentIndex=NULL;

}


int LinkedList::GetLength()
{
    return lengthOfList;
}


Node* LinkedList::GetCurrentIndex()
{
    return currentPosition;
}

Node* LinkedList::GetHeadAddress()
{
    return head;
}

bool LinkedList::CheckFull()
{
    bool full;

    try
    {
        temp = new Node;
        delete temp;
        full = false;

    }
    catch(bad_alloc &ex)
    {
        full = true;
    }
    return full;
}


bool LinkedList::CheckEmpty()
{
    return (lengthOfList==0);
}


void LinkedList::InsertNode(int index,int value)
{
    bool full = CheckFull();
    int length = GetLength();
    if(full == true)
    {
        cout<<"LinkedList Full!";
    }
    else if(full == false && index==0)
    {
        Node* node = new Node;

        node->data = value;
        node->next = head;

        head = node;
        lengthOfList++;
    }
    else if(full == false && index>0)
    {

    }

}

void LinkedList::DeleteNode(T value)
{

}


void GetNode(int,T);


void ReverseList();


void PrintList()
{

}


void ResetList();


void GetSuccessiveNodes(T&);

