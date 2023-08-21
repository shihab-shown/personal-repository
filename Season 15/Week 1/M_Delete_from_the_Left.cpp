#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s,t;
  cin>>s>>t;
  int n=s.length();
  int m=t.length();
  int i=n,j=m;
  while(i!=0 && j!=0)
  {
    if(s[i-1]==t[j-1])
    {
      i--;
      j--;
    }
    else
    {
      break;
    }
  }
  cout<<i+j<<endl;
  return 0;
}