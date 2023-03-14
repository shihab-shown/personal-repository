#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s;
  cin>>s;
  int count=1, n=s.length();
  for(int i=0;i<n;i++)
  {
    if(s[i]>='A' && s[i]<='Z')
    {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}