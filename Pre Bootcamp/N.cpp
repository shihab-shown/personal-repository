#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a<c || a>c && a<b)
    {
      cout<<a<<endl;
    }
    else if(b>a && b<c || b>c && b<a)
    {
      cout<<b<<endl;
    }
    else
    {
      cout<<c<<endl;
    }
  }
  return 0;
}