#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> tree1;
    QueType<int> q;

    bool emptyy = tree1.IsEmpty();
    if(emptyy==1)
    {
        cout<<"Empty!\n";
    }
    else
    {
        cout<<"Not Empty!\n";
    }

    cout<<"Enter items: \n";
    int n;
    cin>>n;
    for(int i=0; i<10; i++)
    {
        tree1.InsertItem(n);
    }

    emptyy = tree1.IsEmpty();
    if(emptyy==1)
    {
        cout<<"Empty!\n";
    }
    else
    {
        cout<<"Not Empty!\n";
    }

    cout<<tree1.LengthIs()<<"\n";


    bool found;



    tree1.RetrieveItem(9,found);
    tree1.RetrieveItem(13,found);



}
