#include <bits/stdc++.h>
#include "sortedtype.cpp"

using namespace std;
int main()
{
    SortedType<int> list1;
    cout<<"Length: "<<list1.LengthIs()<<"\n";

    int n;
    cout<<"Enter n: ";
    for(int i=0; i<5; i++)
    {
        cin>>n;
        list1.InsertItem(n);

    }


    int getNum;
    cout<<"List: ";
    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(getNum);
        cout<<getNum<<" ";
    }
    cout<<"\n";

    int m = 6;
    bool found;
    int location = list1.RetrieveItem(m,found);

    cout<<m<<" found at location "<<location;

    cout<<"\n";

    m = 5;
    location = list1.RetrieveItem(m,found);
    cout<<m<<" found at location "<<location;

    cout<<"\n";

    cout<<"Full?: "<<list1.IsFull();

    list1.ResetList();

    m = 1;
    list1.DeleteItem(m);

    cout<<"List: ";
    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(getNum);
        cout<<getNum<<" ";
    }
    cout<<"\n";

    cout<<"Full?: "<<list1.IsFull();
}
