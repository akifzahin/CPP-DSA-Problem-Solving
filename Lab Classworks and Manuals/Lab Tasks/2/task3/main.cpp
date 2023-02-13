#include <iostream>

using namespace std;

int main()
{
    int rows;

    cout<<"Enter rows: "<<"\n";
    cin>>rows;

    int columns[rows];
    int **multiArray = new int*[rows];

    cout<<"Enter columns: "<<"\n";
    for(int i=0; i<rows; i++)
    {
        cin>>columns[i];
    }
     for(int i=0; i<rows; i++)
    {

        multiArray[i]=new int[columns[i]];
    }

    cout<<"Enter elements: "<<"\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns[i]; j++)
        {
            cin>>multiArray[i][j];
        }
    }
    cout<<"Printing elements: "<<"\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns[i]; j++)
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
