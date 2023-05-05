#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "node.h"

template <class T>
class LinkedList
{


private:
    Node<T>* head;
    int lengthOfList;
    int currentIndex;
public:
    LinkedList();
    ~LinkedList();

    int GetLength();
    int GetCurrentIndex();
    void GetHeadAddress();
    void GetNode(int,T);
    bool CheckFull();
    bool CheckEmpty();
    void InsertNode(int,T);
    void DeleteNode(T);
    void ReverseList();
    void PrintList();
    void ResetCurrentIndex();
    void IterateNodes(T&);
    void SortList();

};


#endif // LINKEDLIST_H_INCLUDED
