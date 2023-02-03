#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int fact=1;
    for(int i=1; i<=number; i++)
    {
        fact*=i;

    }
    cout<<"The factorial is: "<<fact;
}
