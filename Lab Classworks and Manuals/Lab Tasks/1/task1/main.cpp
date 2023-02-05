#include <iostream>

using namespace std;

bool isPerfectNumber(int n)
{
    bool flag=false;
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }

    }
    if(sum==n)
    {
        flag=true;
    }
    else
    {

        flag=false;
    }
    return flag;
}

int main()
{

    int firstNum,lastNum;
    cout<<"Enter first and last number: ";
    cin>>firstNum>>lastNum;

    cout<<"The perfect numbers are: \n";
    for(int i=firstNum; i<=lastNum; i++)
    {
        if(isPerfectNumber(i)==true)
        {

            cout<<i<<" ";
        }

    }
}
