#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s, p;
  p = "heidi";
  cin >> s;
  int size = s.length(), count = 0;
  for (int i = 0; i < size; i++)
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