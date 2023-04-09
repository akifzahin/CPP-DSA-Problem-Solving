#include <bits/stdc++.h>
#include "stack.cpp"
using namespace std;

void StringSpaceRemove(string &input1)
{
    input1.erase(remove(input1.begin(), input1.end(), ' '), input1.end());

}
int main()
{
    StackType<int> stack1;

    string input;
    cout<<"Enter a string of parentheses: \n";
    getline(cin,input);

    StringSpaceRemove(input);

    for(int i=0; i<5; i++)
    {
        if(input[i]=='(')
        {
            stack1.Push(input[i]);
        }
        else if(input[i]==')')
        {
            stack1.Pop();
        }


    }

    if(stack1.IsEmpty() == 1)
    {
        cout<<"Balanced.";
    }
    else
    {
        cout<<"Not Balanced.";
    }




}
