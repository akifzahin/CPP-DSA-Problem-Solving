#include <iostream>
#include "complex.cpp"

using namespace std;

int main()
{
    Complex firstComplex(3,4);
    Complex secondComplex(7,8);
    Complex thirdComplex;
    thirdComplex = firstComplex + secondComplex;
    thirdComplex.Print();
}
