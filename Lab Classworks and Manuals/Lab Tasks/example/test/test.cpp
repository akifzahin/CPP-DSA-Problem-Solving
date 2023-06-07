#include <bits/stdc++.h>
using namespace std;

int PowerSeries(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return pow(n,n) + PowerSeries(n-1);
    }
}

double HarmonicSeries(double n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 1/n + HarmonicSeries(n-1);
    }
}
int main()
{
    double n;
    cin>>n;

    //cout<<PowerSeries(n);
    //cout<<HarmonicSeries(n);
}
