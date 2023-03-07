#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

// decimal to binary
string decToBinary(int n)
{
  if (n == 0)
  {
    return "00000000";
  }
  int binaryNum[32];
  int i = 0;
  while (n > 0)
  {
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }

  string s = "";
  for (int j = i - 1; j >= 0; j--)
    s += to_string(binaryNum[j]);
  return s;
}

int main()
{
  fast 
  int n,cases=1;
  cin >> n;
  while (n--)
  {
    bool flag = true;
    string s;
    cin >> s;
    s+=".";
    int len = s.length();
    char separator = '.';
    int i = 0;
    string arr;
    vector<ll> v;
    while (i < len)
    {
      if (s[i] != separator)
      {
        arr += s[i];
      }
      else
      {
        int num = stoi(arr);
        string temp = decToBinary(num);
        v.push_back(stoi(temp));
        arr.clear();
      }
      i++;
    }
    arr.clear();
    string bin;
    cin >> bin;
    bin+=".";
    int len1 = bin.length();
    char separator1 = '.';
    int i1 = 0;
    int x=0;
    while (i1 < len1)
    {
      if (bin[i1] != separator1)
      {
        arr += bin[i1];
      }
      else
      {
        int num = stoi(arr);
        if (num != v[x])
        {
          flag = false;
          break;
        }
        x++;
        arr.clear();
      }
      i1++;
    }
    if (flag)
    {
      printf("Case %d: Yes\n",cases++);
    }
    else
    {
      printf("Case %d: No\n",cases++);
    }
    v.clear();

  }
  return 0;
}