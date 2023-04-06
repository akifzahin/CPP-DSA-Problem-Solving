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

};
#endif // UNSORTEDLINKEDLIST_H_INCLUDED
