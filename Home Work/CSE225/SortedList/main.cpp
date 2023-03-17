#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timeStamp.h"
#include "timeStamp.cpp"
using namespace std;

int main()
{
    SortedType<TimeStamp> list;
    // TimeStamp t1(15, 34, 23);
    // TimeStamp t2(13, 13, 02);
    // TimeStamp t3(43, 45, 12);
    // TimeStamp t4(25, 36, 17);
    // TimeStamp t5(52, 02, 20);
    // list.InsertItem(t1);
    // list.InsertItem(t2);
    // list.InsertItem(t3);
    // list.InsertItem(t4);
    // list.InsertItem(t5);
    // list.DeleteItem(t4);
    TimeStamp t;
    for (int i = 0; i < 5; i++)
    {
        int s, m, h;
        cin >> s >> m >> h;
        t.SetTime(s, m, h);
        list.InsertItem(t);
    }
    list.ResetList();
    t.SetTime(25, 36, 17);
    list.DeleteItem(t);
    TimeStamp time;
    list.ResetList();
    for (int i = 0; i < list.LengthIs(); i++)
    {
        list.GetNextItem(time);
        time.Print();
    }
    return 0;
}
