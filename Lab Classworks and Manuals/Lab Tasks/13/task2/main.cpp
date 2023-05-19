#include <iostream>
#include "quetype.cpp"
using namespace std;
void BinaryQueue(int n)
{
    QueType<int> queue1;
    queue1.Enqueue(1);

    int inputNumber,resultNumber;
    for(int i=0; i<n; i++)
    {
      for(int j=i; j<n; j++)
      {
          queue1.Dequeue(resultNumber);
            queue1.Enqueue(resultNumber);
          cout<<resultNumber;

      }

        queue1.Enqueue(0);
        queue1.Enqueue(1);
        cout<<"\n";


    }
}
int main()
{
   int n;
   cout<<"Enter n: ";
   cin>>n;

    //BinaryQueue(n);

}
