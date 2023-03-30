#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class timeStamp
{
private:
        int ss,mm,hh;
public:
        timeStamp();
        timeStamp(int,int,int);
        timeStamp operator==(timeStamp);
        int GetSS();
        int GetMM();
        int GetHH();
        void Print();
};

#endif // TIMESTAMP_H_INCLUDED
