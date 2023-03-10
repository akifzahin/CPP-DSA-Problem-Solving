#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
const int MAX_ITEMS = 5;
class timeStamp
{
private:
    int length;
    int seconds[MAX_ITEMS];
    int minutes[MAX_ITEMS];
    int hours[MAX_ITEMS];
    int currentPos;

public :
    timeStamp();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(int, int, int);
    void DeleteItem(int,int,int);
    int RetrieveItem(int&,bool&);
    void ResetList();
    void GetNextItem(int&, int&, int&);
    void PrintList();
};


#endif // TIMESTAMP_H_INCLUDED
