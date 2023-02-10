#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  int mat[n][n],sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> mat[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    sum1 += mat[i][i];
    sum2 += mat[i][n - i - 1];
  } 
  cout << abs(sum1 - sum2) << endl;
  return 0;
}