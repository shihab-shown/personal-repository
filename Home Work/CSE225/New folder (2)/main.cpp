#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include <iostream>

using namespace std;

int main()
{
    UnsortedType<int> list;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        list.InsertItem(x);
    }
    for (int i = 0; i < 4; i++)
    {
        int a;
        list.GetNextItem(a);
        cout << a << "  ";
    }
    cout << "\n";
    cout << list.LengthIs() << "\n";
    list.InsertItem(1);
    list.ResetList();
    for (int i = 0; i < 5; i++)
    {
        int a;
        list.GetNextItem(a);
        cout << a << "   ";
    }
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        bool isFound = false;
        list.RetrieveItem(x, isFound);
        if (isFound)
        {
            cout << "Item is found\n";
        }
        else
        {
            cout << "Item is not found\n";
        }
    }
    if (list.IsFull())
    {
        cout << "List is full\n";
    }
    else
    {
        cout << "List is not full\n";
    }
    list.DeleteItem(5);
    if (list.IsFull())
    {
        cout << "List is full\n";
    }
    else
    {
        cout << "List is not full\n";
    }
    list.DeleteItem(1);
    list.ResetList();
    for (int i = 0; i < list.LengthIs(); i++)
    {
        int a;
        list.GetNextItem(a);
        cout << a << "   ";
    }
    list.DeleteItem(6);
    list.ResetList();
    cout<<"\n";
    for (int i = 0; i < list.LengthIs(); i++)
    {
        int a;
        list.GetNextItem(a);
        cout << a << "   ";
    }
    return 0;
}
