#ifndef UNSORTEDLISTARRAY_H_INCLUDED
#define UNSORTEDLISTARRAY_H_INCLUDED
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

    void GetElement(T&);
    int GetElementIndex(T&);
    int GetLength();
    int GetCurrentIndex();
    void InsertElement(T);
    void RemoveElement(T);
    void ReverseList();
    bool CheckFull();
    bool CheckEmpty();
    void MakeEmpty();

    void SumList();
   ListArray operator+(UnsortedListArray);









};




#endif // UNSORTEDLISTARRAY_H_INCLUDED
