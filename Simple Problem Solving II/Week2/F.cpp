#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string s;
  int num = 0;
  cin>>s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '+')
    {
      num++;
    } 
    else if (s[i] == '-')
    {
      num--;
    }
  }
  cout<<num<<"\n";
  return 0;
}