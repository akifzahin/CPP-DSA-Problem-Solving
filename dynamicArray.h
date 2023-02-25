#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED
template <class T>
class dynamicArray
{
private:
    T **data;
    int size;
public:
    dynamicArray();
    dynamicArray(int);
    ~dynamicArray();
    void setValue(int, int, T);
    T getValue(int,int);
    void allocate(int);
};
#endif // DYNAMICARRAY_H_INCLUDED
