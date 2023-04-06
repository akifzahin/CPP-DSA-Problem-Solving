#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>
using namespace std;

class Test
{
private:
    int age;
    string name;
    int* height;

public:
    Test();
    Test(int,string,int);
    Test(Test&);
    void print();
    Test operator+(const Test&);



};



#endif // TEST_H_INCLUDED
