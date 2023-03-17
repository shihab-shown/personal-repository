#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class TimeStamp
{
public:
    TimeStamp();
    TimeStamp(int, int, int);
    void SetTime(int, int, int);
    void GetTime(int &, int &, int &);
    void Print();
    bool operator==(TimeStamp);
    bool operator!=(TimeStamp);
    bool operator<(TimeStamp);
    bool operator>(TimeStamp);
    bool operator<=(TimeStamp);
    bool operator>=(TimeStamp);
private:
    int hour;
    int minute;
    int second;
};
#endif // TIMESTAMP_H_INCLUDED