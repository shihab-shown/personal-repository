#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "timeStamp.h"
#include "timeStamp.cpp"
using namespace std;

int main()
{
    UnsortedType<TimeStamp> list;
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
