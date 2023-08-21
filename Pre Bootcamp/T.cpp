#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s;
  cin>>s;
  int count=0;
  for (int i = 0; i < s.length(); i++)
  {
    if(s[i]=='4' || s[i]=='7')
    {
      count++;
    }
  }
  if (count==4 || count==7)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  return 0;
}