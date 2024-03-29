#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{

    UnsortedType<int> list1;
    UnsortedType<int> list2;
    UnsortedType<int> temp;

    UnsortedType <int> resultList;

    int m,n;
    cout<<"Enter in descending order:\n ";
    cout<<"Enter size for 1st List: ";
    cin>>m;

    int enterFirst;

    cout<<"Enter items: \n";
    for(int i=0;  i<m; i++)
    {
        cin>>enterFirst;
        list1.InsertItem(enterFirst);

    }

    cout<<"Enter size for 2nd List: ";
    cin>>n;

    int enterSecond;

    cout<<"Enter items: \n";
    for(int i=0;  i<n; i++)
    {
        cin>>enterSecond;
        list2.InsertItem(enterSecond);

    }


    //Merging and Sorting
    int temp1,temp2;
    list1.GetNextItem(temp1);
    list2.GetNextItem(temp2);

    for(int i=0; i<m+n; i++)
    {

        if(temp1<temp2)
        {
            resultList.InsertItem(temp1);
            list1.GetNextItem(temp1);
        }
        else if(temp1>temp2)
        {
            resultList.InsertItem(temp2);
            list1.GetNextItem(temp2);
        }
        else
        {
            resultList.InsertItem(temp1);
            list1.GetNextItem(temp1);
            list2.GetNextItem(temp2);

        }
    }



    int resultNum;
    cout<<"Printing values: ";
    for(int i=0; i<m+n; i++)
    {
       resultList.GetNextItem(resultNum);
        cout<<resultNum<<" ";
    }

}



