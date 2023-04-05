#include <iostream>
#include "unsortedLinkedList.h"
#include "unsortedLinkedList.cpp"
using namespace std;

int main()
{
    UnsortedLinkedList<int> list1;

    int size1;
    cout<<"Enter size: ";
    cin>>size1;

    int num;
    for(int i=0; i<size1; i++)
    {
        list1.InsertNode(num);
    }
}
