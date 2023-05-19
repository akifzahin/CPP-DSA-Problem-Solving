#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
//Uses only integers (for now)
struct Node
{
    int data;
    Node* next;
};


class LinkedList
{

private:
    Node* head;
    int lengthOfList;
    Node* currentPosition;
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
