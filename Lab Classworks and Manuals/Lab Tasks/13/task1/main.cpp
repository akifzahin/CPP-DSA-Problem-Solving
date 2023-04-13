#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> queue1(5);

    if(queue1.IsEmpty()== 1)
    {
        cout<<"Yes Empty.\n";
    }
    else
    {

        cout<<"No Empty.\n";
    }

    cout<<"Insert items: \n";
    int insertNum;
    for(int i=0; i<4; i++)
    {
        cin>>insertNum;
        queue1.Enqueue(insertNum);
    }

    if(queue1.IsEmpty()== 1)
    {
        cout<<"Yes Empty.\n";
    }
    else
    {

        cout<<"No Empty.\n";
    }

    if(queue1.IsFull()== 1)
    {
        cout<<"Yes Full.\n";
    }
    else
    {

        cout<<"No Full.\n";
    }

    queue1.Enqueue(6);

    cout<<"Printing items: \n";
    int resultNum;
    for(int i=0; i<5; i++)
    {
        queue1.Dequeue(resultNum);
        cout<<resultNum<<" ";
    }

    if(queue1.IsFull()== 1)
    {
        cout<<"Yes Full.\n";
    }
    else
    {

        cout<<"No Full.\n";
    }

    queue1.Enqueue(8);

    int deleteNum;
    queue1.Dequeue(deleteNum);
    queue1.Dequeue(deleteNum);

    cout<<"Printing items: \n";

    for(int i=0; i<5; i++)
    {  int deleteNum;
        queue1.Dequeue(resultNum);
        cout<<resultNum<<" ";
    }


    queue1.Dequeue(deleteNum);
    queue1.Dequeue(deleteNum);
    queue1.Dequeue(deleteNum);

    if(queue1.IsEmpty()== 1)
    {
        cout<<"Yes Empty.\n";
    }
    else
    {

        cout<<"No Empty.\n";
    }

    queue1.Dequeue(deleteNum);




}
