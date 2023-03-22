#include "sortedtype.h"
#include "sortedtype.cpp"
#include <iostream>
using namespace std;
int main()
{
  SortedType<int> list;
  for (int i = 0; i < 5; i++)
  {
    int num;
    cin >> num;
    list.InsertItem(num);
  }
  list.ResetList();
  int num;
  for (int i = 0; i < list.LengthIs(); i++)
  {
    list.GetNextItem(num);
    cout << num << " ";
  }
  cout << endl << list.LengthIs() << endl;
  return 0;
}