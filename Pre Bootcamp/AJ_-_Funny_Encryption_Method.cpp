#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int decToBinary(int n)
{
  int binaryNum[32];
  int i = 0;
  while (n > 0)
  {
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }
  int count = 0;
  for (int j = i - 1; j >= 0; j--)
  {
    if (binaryNum[j] == 1)
      count++;
  }
  return count;
}

int hexToDec(string hexVal)
{
  int len = hexVal.length();
  int base = 1;

  int dec_val = 0;
  for (int i = len - 1; i >= 0; i--)
  {

    if (hexVal[i] >= '0' && hexVal[i] <= '9')
    {
      dec_val += (hexVal[i] - 48) * base;

      base = base * 16;
    }

    else if (hexVal[i] >= 'A' && hexVal[i] <= 'F')
    {
      dec_val += (hexVal[i] - 55) * base;

      base = base * 16;
    }
  }
  return dec_val;
}

int main()
{
  fast int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string hex;
    hex = to_string(n);
    cout << decToBinary(n) << " " << decToBinary(hexToDec(hex)) << endl;
  }
  return 0;
}