#include <iostream>
#include "Rectangle.cpp"
using namespace std;


int main()
{
   Rectangle rec(2,3);

   cout<<rec.Area()<<"\n";
   cout<<rec.Perimeter()<<"\n";
}
