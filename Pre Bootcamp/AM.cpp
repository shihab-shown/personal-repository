#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='R')
        a++;
      else if(s[i]=='G')
        b++;
      else
        c++;
    }
    if(a>=b && a>=c)
      cout<<n-a<<endl;
    else if(b>=a && b>=c)
      cout<<n-b<<endl;
    else
      cout<<n-c<<endl;
  }
  return 0;
}