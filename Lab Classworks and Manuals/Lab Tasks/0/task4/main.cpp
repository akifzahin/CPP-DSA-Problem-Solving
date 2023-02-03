#include <iostream>

using namespace std;
bool isPrime(int n)
{
    bool flag=true;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            flag=false;
            break;
        }

    }
    return flag;

}

int main()
{
    cout<<"Prime Numbers between 300 to 500 are: ";
    for(int i=300; i<=500; i++)
    {
        if(isPrime(i)==true)

        {
            cout<<"\n"<<i;
        }

    }
}
