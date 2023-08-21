#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < i + 1; j++)
    {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}