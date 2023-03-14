#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s, p;
  p = "heidi";
  cin >> s;
  int len = s.length(), count = 0;
  for (int i = 0; i < len; i++)
  {
    if (s[i] == p[count])
    {
      count++;
    }
  }
  if (count == 5)
  {
    cout <<"YES"<< endl;
  }
  else
  {
    cout <<"NO"<< endl;
  }
  return 0;
}