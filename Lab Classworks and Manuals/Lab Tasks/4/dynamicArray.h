#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED
class dynamicArray
{
private:
    int *data;
    int size;
public:
    dynamicArray();
    dynamicArray(int);
    ~dynamicArray();
    void setValue(int, int);
    int getValue(int);
    void allocate(int);
};
#endif // DYNAMICARRAY_H_INCLUDED
