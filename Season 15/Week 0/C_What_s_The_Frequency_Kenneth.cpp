#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char>a;
map<char, int> f;
int main()
{
  string s;
  while (getline(cin, s))
  {
    int i=0;
    while (i<s.size())
    {
      if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
      {
        if (f.count(s[i]) == 0)
        {
          a.push_back(s[i]);
          f[s[i]] = 1;
        }
        else
        {
          f[s[i]]++;
        }
      }
      i++;
    }
    sort(a.begin(), a.end());
    int max = 0;
    string maxChar;
    for (auto &o : a)
    {
      if (f[o] >= max)
      {
        max = f[o];
      }
    }
    for (auto &o : a)
    {
      if (f[o] == max)
      {
        maxChar += o;
      }
    }
    cout << maxChar << " " << max << "\n";
    a.clear();
    f.clear();
  }
  // {
  //   if (f.count(n) == 0)
  //   {
  //     a.push_back(n);
  //     f[n] = 1;
  //   }
  //   else
  //   {
  //     f[n]++;
  //   }
  // }
  // for (int i = 0; i < a.size(); i++)
  // {
  //   cout<<a[i]<<" "<<f[a[i]]<<"\n";
  // }
  
  return 0;
}