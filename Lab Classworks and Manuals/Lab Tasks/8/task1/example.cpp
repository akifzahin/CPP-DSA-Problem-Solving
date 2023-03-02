#include <iostream>
using namespace std;

void swap1(int &m, int &n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
}
void swap2(int *u,int *v)
{
    int *temp;
    temp = u;
    u = v;
    v = temp;

}
void swap3(int *e, int *f)
{
    int temp;
    temp = *e;
    *e = *f;
    *f = temp;

}



int main()
{
//    int a=8;
//    int *ptr = &a;
//    int &b = a;
//
//    cout<<a<<endl;
//    cout<<b<<endl;
//    cout<<&a<<endl;
//    cout<<&b<<endl;
//    cout<<*ptr;

    int a=5,b=6,x=5,y=6,p=5,q=8;

    swap1(a,b);
    cout<<"a: "<<a<<"\n"<<"b: "<<b<<"\n";

    swap2(&x,&y);
    cout<<"x: "<<x<<"\n"<<"y: "<<y<<"\n";

    swap3(&p,&q);
    cout<<"p: "<<p<<"\n"<<"q: "<<q<<"\n";


}
