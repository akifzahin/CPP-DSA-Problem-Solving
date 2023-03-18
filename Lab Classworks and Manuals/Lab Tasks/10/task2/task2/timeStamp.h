#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp{

private:
    int ss,mm,hh;
public:
    timeStamp(int,int,int);
    int getSS();
    int getMM();
    int getHH();
    void printTime();


};


#endif // TIMESTAMP_H_INCLUDED
