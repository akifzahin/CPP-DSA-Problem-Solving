#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;


class studentInfo
{
private:
    int length;
    double CGPA[MAX_ITEMS];
    int ID[MAX_ITEMS];
    string NAME[MAX_ITEMS];
    int currentPos;


public :
    studentInfo();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(int,string,double);
    void DeleteItem(int);
    void RetrieveItem(int, bool&);
    void ResetList();
    void GetNextItem(int&,double&,string&);
    void PrintList();

};


#endif // STUDENTINFO_H_INCLUDED
