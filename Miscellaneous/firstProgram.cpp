// #include <iostream>
// #include <string>
// #include <cmath>
#include <bits/stdc++.h>
using namespace std;

// struct person
// {
//    int age;
//    string gender;
//    string name;

//    void greet()
//     {
//        cout<<"\nHello!\n";
//     }
//  };
// struct female:person
// {
//    void shout()
//    {
//      cout<<"AHHHH!";
//    }
// };

//This function changes the values of the original variables in the main function

// void swapNumbers(int &x, int &y)
// {
//     int temp = x;
//     x=y;
//     y=temp;
// }

//Recursive Function Demo 1
// int sum(int num)
// {
//     int result;
//     if(num!=0)
//     {
//         result = num + sum(num-1);
        
//     }
//     else
//     {
//         result = 0;
//     }
//     return result;
// }

//Recursive Function Demo 2
// int fibonacciSequence(int num)
// {
//     if(num<=1)
//     {
//         return num;
//     }
//     else
//     {
//         return fibonacciSequence(num-1) + fibonacciSequence(num-2);
//     }
// }

//Class Demo 1
// class Vehicle
// {
//     private: 
//         int modelID {};
//         string name {};
   
//     public:
//        Vehicle(int modelID, string name)
//         {
//             this->modelID = modelID;
//             this->name = name;
//         }
//         void setName(string name)
//         {
//             this->name = name;
//         }
//         int getID()
//         {
//             return modelID;
//         }
//         string toString()
//         {
//             return "Name= "+name+"\nModelID= "+to_string(modelID)+"\n";
//         }


// };

// class Rickshaw : public Vehicle
// {
//     public:
//         Rickshaw(int modelID, string name) : Vehicle{modelID,name}
//         {
           
//         }
// };


int main()
{   
      
   char array[] = {'a','b','c'};
   for(int i=0; i<(sizeof(array)/sizeof(char)); i++)
   {
      cout<<static_cast<void*>(&array[i])<<"\n";
   }
   
}

//try {
//   int age = 15;
//   if (age >= 18) {
//     cout << "Access granted - you are old enough.";
//   } else {
//     throw 404;
//   }
// }
// catch (int myNum) {
//   cout << "Access denied - You must be at least 18 years old.\n";
//   cout << "Age is: " << myNum;
// }

       // string path = "file.txt";
    // ofstream file(path);
    // file<<"Hello World!";
    // file.close();

//     string path = "file.txt";
//     ifstream file(path); 
    
//     string data;
//     while( getline(file,data) )
//     {
//         cout<<data;
//     }

//     file.close();
    
//     if( remove("file.txt") == 0 )
//     {
//         cout<<"File deleted!";
//     }
//    else
//     {
//         cout<<"File not deleted!";
//     }
   
   
   
   // Vehicle car(1212,"Akif");
//    car.setName("Kuddus");
//    cout<<car.getID()<<"\n";
//    cout<<car.toString();
   
//    Rickshaw ricky(1234,"Aman");
//    cout<<ricky.toString();
   
   
   
    //Recursive Function Demo 1
    //cout<<"Result is: "<<sum(45)<<"\n";

    //Recursive Function Demo 2
    // for(int i=0; i<15; i++)
    // {
    //     cout << fibonacciSequence(i)<<"\n";
    // }

    //Pass by reference
    // int x = 10;
    // int y = 20;
    // swapNumbers(x, y);
    // cout<<x<<"\n"<<y;


    // int test = 1;
    // int* testptr = &test;
    // cout<<testptr<<"\n"; Printing pointer memory address
    // cout<<*testptr;      Printing pointer original value
    
    //Changing pointer original value
    // char testChar = 'A';
    // char* testCharPtr = &testChar;
    // *testCharPtr = 'B';
    // cout<<testChar;


    // int testArray1[] = {20,30,40,50};
    // cout<<(sizeof(testArray1)/sizeof(int));
    
    // cout<<"\n";
    
    // char testArray2[] = {'a','b','c','d','e'};
    // cout<<(sizeof(testArray2));
 
    // int val = 7;
    // int &replica = val;
    
    // cout<<&replica; Memory Address
    // cout<<replica;  Reference Value

    // string bitch = "Hello Bitch";
    // string snitch = " Mitch";
    // string litch = bitch.append(snitch);
    // cout <<litch+"\n";
  
    // cout<<"Enter your name\n";
    // string fullName;
    // getline(cin, fullName);
    // cout<<"Name: "<<fullName;
  
  
    //cout<<"\n"<<endl;

    // double n1,n2;
    // cout<<"Enter two numbers\n";
    // cin >> n1;
    // cin >> n2;

    // double result = n1>n2;
    // cout<<"Result is: "<<result;

    //     for (int i = 0; i < 10; i++) {
    //         if (i > 4) 
    //         {
    //              continue;
    //           }
    //   cout << i << "\n";
    // }

    
    // person person1;
    // person1.age = 19;
    // cout<<"Age: "<<person1.age;
    // person1.greet();

    // female female1;
    // female1.greet();
    // female1.shout();





