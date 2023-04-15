#ifndef LISTARRAY_H_INCLUDED
#define LISTARRAY_H_INCLUDED
const int maxSize = 6;

template <class T>
class ListArray
{
private:

    int lengthOfList;
    T elements[maxSize];
    int currentIndex;
public:
    ListArray();
    ~ListArray();

    void GetElementByIndex(T&,int);
    void GetElementByValue(T&);
    int GetElementIndex(T);
    int GetLength();
    int GetCurrentIndex();
    void ResetCurrentIndex();
    bool CheckFull();
    bool CheckEmpty();
    void MakeEmpty();
    void InsertElementByValue(T);
    void InsertElementByIndex(int);
    void RemoveElementByValue(T);
    void RemoveElementByIndex(int);
    void SortList();
    void ReverseList();
    void IterateList(T&);
    void SumList();










#endif // LISTARRAY_H_INCLUDED
