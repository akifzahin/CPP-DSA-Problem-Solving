#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class TimeStamp
{
private:
    int ss,mm,hh;
public:
    TimeStamp(int,int,int);
    int GetSS();
    int GetMM();
    int GetHH();


};


#endif // TIMESTAMP_H_INCLUDED
