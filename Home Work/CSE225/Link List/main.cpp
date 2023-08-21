#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
  UnsortedType<int> list1, list2, list3;
  int m, n, item;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> item;
    list1.InsertItem(item);
  }
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> item;
    list2.InsertItem(item);
  }
  list1.ResetList();
  list2.ResetList();
  list3.ResetList();
  if (m > n)
  {
    for (int i = 0; i < n; i++)
  {
    int item1, item2;
    list1.GetNextItem(item1);
    list2.GetNextItem(item2);
    if (item1 < item2)
    {
      list3.InsertItem(item2);
      list3.InsertItem(item1);
    }
    else
    {
      list3.InsertItem(item1);
      list3.InsertItem(item2);
    }
  }
    for (int i = 0; i < m - n; i++)
    {
      int item1;
      list1.GetNextItem(item1);
      list3.InsertItem(item1);
    }
  }
  else
  {
    for (int i = 0; i < m; i++)
  {
    int item1, item2;
    list1.GetNextItem(item1);
    list2.GetNextItem(item2);
    if (item1 < item2)
    {
      list3.InsertItem(item2);
      list3.InsertItem(item1);
    }
    else
    {
      list3.InsertItem(item1);
      list3.InsertItem(item2);
    }
  }
    for (int i = 0; i < n - m; i++)
    {
      int item2;
      list2.GetNextItem(item2);
      list3.InsertItem(item2);
    }
  }

  UnsortedType<int> list4;
  int length = list3.LengthIs();

  for (int i = 0; i < length; i++)
  {
    list3.ResetList();
    int minVal;
    list3.GetNextItem(minVal);
    int item;
    for (int j = 0; j < length - i -1; j++)
    {
      list3.GetNextItem(item);
      if (item > minVal)
      {
        minVal = item;
      }
    }
    list4.InsertItem(minVal);
    list3.DeleteItem(minVal);
  }

  list3 = list4; 

  list3.ResetList();
  for (int i = 0; i < list3.LengthIs(); i++)
  {
    list3.GetNextItem(item);
    cout << item << " ";
  }

  return 0;
}