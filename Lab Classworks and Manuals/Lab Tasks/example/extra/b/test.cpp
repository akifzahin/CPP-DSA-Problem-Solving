#include "test.h"
#include <iostream>
using namespace std;

Test::Test()
{
    age = 19;
    name = "Harry";
    height = new int;
}
Test::Test(int a, string n, int h)
{
    age = a;
    name = n;
    height = new int;
    *height = h;
}
Test::Test(Test& obj)
{
    age = obj.age;
    name = obj.name;
    height = new int;
    *height = *(obj.height);

}
Test Test::operator+(const Test& obj)
{
    Test temp;
    temp.age = this->age + obj.age;
    return temp;
}
void Test::print()
{
    cout<<age<<"\n"<<name<<"\n"<<*height;
}
