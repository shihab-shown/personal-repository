#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
  fast int w, h, n;
  while (cin >> w >> h >> n)
  {
    if (w == 0 && h == 0 && n == 0)
      break;
    int x1, x2, y1, y2;
    int arr[505][505];
    for (int i = 0; i < n; i++)
    {
      cin >> x1 >> y1 >> x2 >> y2;
      if (x1 > x2)
        swap(x1, x2);
      if (y1 > y2)
        swap(y1, y2);

      for (int i = y1; i <= y2; i++)
      {
        for (int j = x1; j <= x2; j++)
        {
          arr[i][j] = 1;
        }
      }
    }
    int cnt = 0;
    for (int i = 1; i <= h; i++)
    {
      for (int j = 1; j <= w; j++)
      {
        if (arr[i][j] == 0)
          cnt++;
        else
          arr[i][j] = 0;
      }
    }
    if (cnt == 0)
      cout << "There is no empty spots." << endl;
    else if (cnt == 1)
      cout << "There is one empty spot." << endl;
    else
      cout << "There are " << cnt << " empty spots." << endl;
  }
  return 0;
}