#include <iostream>
using namespace std;
void SumofPointers(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void SumOfReferences(int &a, int &b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;
}
int** TwoDArrayCreation(int r, int c)
{
    int** matrix = new int*[r];
    for(int i=0; i<r; i++)
    {
        matrix[i] = new int[c];
    }
    for(int i=0; i<r; i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;
    return matrix;
}
void TwoDArrayInputOutput(int** arr, int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(void)
{
//   int a = 2,b=3;
//   SumofPointers(&a,&b);
//
//   cout<<a<<" "<<b;
//
//   cout<<"\n";
//
//   SumOfReferences(a,b);
//   cout<<a<<" "<<b;

//    int rows,columns;
//    cout<<"Enter rows: ";
//    cin>>rows;
//
//    cout<<"Enter columns: ";
//    cin>>columns;
//
//    int** resultMatrix = TwoDArrayCreation(rows,columns);
//    TwoDArrayInputOutput(resultMatrix,rows,columns);


}
