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
    bool FullCheck();
    bool EmptyCheck();
    void InsertNode(int,T);
    void DeleteNode(T);
    void GetNode(int,T);
    void ReverseList();
    void PrintList();
    void ResetList();
    void GetSuccessiveNodes(T&);
    void SortList();

};


#endif // LINKEDLIST_H_INCLUDED
