#include <iostream>

using namespace std;

int main()
{
    cout<<"\t Simple Calculator:\n";

    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    char op;
    cout<<"Enter operator (+,- or *): ";
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<"Answer: "<<num1+num2;
        break;
    case '-':
        cout<<"Answer: "<<num1-num2;
        break;
    case '*':
        cout<<"Answer: "<<num1*num2;
        break;
    default:
        cout<<"Enter a valid number!";
    }
}
