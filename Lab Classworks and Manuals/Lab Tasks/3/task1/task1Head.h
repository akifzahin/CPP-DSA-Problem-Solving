#ifndef TASK1HEAD_H_INCLUDED
#define TASK1HEAD_H_INCLUDED

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
};

#endif // TASK1HEAD_H_INCLUDED
