#ifndef UNSORTEDLISTARRAY_H_INCLUDED
#define UNSORTEDLISTARRAY_H_INCLUDED
const int maxSize = 6;

template <class T>
class UnsortedListArray
{
private:

    int lengthOfList;
    T elements[maxSize];
    int currentIndex;
public:
    UnsortedListArray();
    ~UnsortedListArray();

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
    UnsortedListArray operator+(UnsortedListArray);









};




#endif // UNSORTEDLISTARRAY_H_INCLUDED
