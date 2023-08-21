#include <iostream>
#include <algorithm>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{
  int m, n;
  cin >> m;
  UnsortedType<int> a;
  for (int i = 0; i < m; i++)
  {
    int temp;
    cin >> temp;
    a.InsertItem(temp);
  }
  cin >> n;
  UnsortedType<int> b;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    b.InsertItem(temp);
  }

  UnsortedType<int> c;
  int i = 1, j = 1;
  int item1, item2;
  a.GetNextItem(item1);
  b.GetNextItem(item2);
  for (int k = 0; k < (m + n); k++)
  {

    if (i > m)
    {
      item1 = 0;
    }
    if (j > n)
    {
      item2 = 0;
    }

    if (item1 > item2)
    {
      c.InsertItem(item1);
      if (i < m)
      {
        a.GetNextItem(item1);
      }

      i++;
    }
    else
    {
      c.InsertItem(item2);
      if (j < n)
      {
        b.GetNextItem(item2);
      }

      j++;
    }
  }

  int kl = c.LengthIs();
  for (int k = 0; k < kl; k++)
  {
    int item;
    c.GetNextItem(item);
    cout << item << " ";
  }

  /*int* arr = new int(m+n);
    for(int i=0;i<m;i++)
    {
        int item;
        a.GetNextItem(item);
        arr[i]=item;
    }
    for(int i=m;i<(m+n);i++)
    {
        int item;
        b.GetNextItem(item);
        arr[i]=item;
    }

    sort(arr,arr+(m+n));


    for(int i=0;i<(m+n);i++)
    {
        cout<<arr[i];
    }*/
}
