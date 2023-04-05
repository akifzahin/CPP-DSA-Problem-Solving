#ifndef UNSORTEDLINKEDLIST_H_INCLUDED
#define UNSORTEDLINKEDLIST_H_INCLUDED
#include "node.h"
template <class T>
class UnsortedLinkedList
{


private:
    Node<T>* head;
    int lengthOfList;
    int currentIndex;
public:
    UnsortedLinkedList();
    ~UnsortedLinkedList();

    void FullCheck();
    void EmptyCheck();
    void InsertNode(int,T);
    void DeleteNode(int,T);
    void GetNode(int,T);
    void ReverseList();
    void PrintList();
    void ResetList();

};
#endif // UNSORTEDLINKEDLIST_H_INCLUDED
