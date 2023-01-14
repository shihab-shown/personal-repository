#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  int arr[n], cntNeg = 0, cntPos = 0, cntZero = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0)
      cntNeg++;
    else if (arr[i] > 0)
      cntPos++;
    else
      cntZero++;
  }
  printf("%.6f\n%.6f\n%.6f", (float)cntPos / n, (float)cntNeg / n, (float)cntZero / n);
  return 0;
}