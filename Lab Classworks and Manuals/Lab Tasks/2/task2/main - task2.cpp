#include <iostream>

using namespace std;

int main()
{
    int rows=3,columns=3;

    char **multiArray = new char*[rows];


    for(int i=0; i<rows; i++)
    {
        multiArray[i]=new char[columns];
    }

    cout<<"Enter elements: "<<"\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin>>multiArray[i][j];
        }
    }
    cout<<"Printing elements: "<<"\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<multiArray[i][j]<<" ";
        }
        cout<<"\n";
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] multiArray[i];
    }
    delete[] multiArray;
}
