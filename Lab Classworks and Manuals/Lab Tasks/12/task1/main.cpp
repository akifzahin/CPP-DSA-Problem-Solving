#include <iostream>
#include "stack.cpp"

using namespace std;

int main()
{
    StackType<int> stack1;
    StackType<int> stack2;

    cout<<"Is stack empty?:  ";
    if(stack1.IsEmpty()==1)
    {
        cout<<"True.";
    }
    else
    {
        cout<<"False.";
    }
        cout<<"\n";
    int num;
    cout<<"Enter values: ";
    for(int i=0; i <4; i++)
    {
        cin>>num;
        stack1.Push(num);
    }


    cout<<"Is stack empty?:  ";
    if(stack1.IsEmpty()==1)
    {
        cout<<"True.";
    }
    else
    {
        cout<<"False.";
    }
    cout<<"\n";

      cout<<"Is stack full?:  ";
    if(stack1.IsFull()==1)
    {
        cout<<"True.";
    }
    else
    {
        cout<<"False.";
    }
    cout<<"\n";

    int popped;
    for(int i=0; i<4; i++)
    {
         popped = stack1.Top();
         stack2.Push(popped);
         //cout<<popped<<" ";
         stack1.Pop();

    }
    cout<<"Printing values: "<<"\n";
     for(int i=0; i<4; i++)
    {
         popped = stack2.Top();
         stack1.Push(popped);
         cout<<popped<<" ";
         stack2.Pop();

    }

   stack1.Push(3);

    for(int i=0; i<5; i++)
    {
         popped = stack1.Top();
         stack2.Push(popped);
         //cout<<popped<<" ";
         stack1.Pop();

    }
    cout<<"\n";

    cout<<"Printing values: "<<"\n";
     for(int i=0; i<5; i++)
    {
         popped = stack2.Top();
         stack1.Push(popped);
         cout<<popped<<" ";
         stack2.Pop();

    }

     cout<<"Is stack full?:  ";
    if(stack1.IsFull()==1)
    {
        cout<<"True.";
    }
    else
    {
        cout<<"False.";
    }

    cout<<"\n";

    stack1.Pop();
    stack1.Pop();
    cout<<"Top = "<<stack1.Top();



}
