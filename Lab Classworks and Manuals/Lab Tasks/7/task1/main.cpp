#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex firstComplex(3.4,4.5);
    Complex secondComplex(7.1,8.4);

    cout<<"First number: \n";
    firstComplex.Print();

    cout<<"Second number: \n";
    secondComplex.Print();

    Complex addition;
    addition = firstComplex + secondComplex;

    cout<<"Answer: \n";
    addition.Print();

    Complex subtraction;
    subtraction = firstComplex - secondComplex;

    cout<<"Answer: \n";
    subtraction.Print();

    Complex multiplication;
    multiplication = firstComplex * secondComplex;

    cout<<"Answer: \n";
    multiplication.Print();

    cout<<"Is the first number not equal to the second number?: \n";
    cout<<(firstComplex!=secondComplex);

}
