#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t,c=1;
  cin>>t;
  for(;c<=t;c++)
  {
    string a;
    ll b,len,i=0,j=0;
    cin>>a>>b;
    len=a.length();
    if(a[0]=='-')
    {
      i=1;
    }
    else
    {
      i=0;
    }
    ll rem=0;
    while(i<len)
    {
      rem=rem*10+(a[i]-'0');
      rem=rem%b;
      i++;
    }
    if(rem==0)
    {
      printf("Case %d: divisible\n",c);
    }
    else
    {
      printf("Case %d: not divisible\n",c);
    }

  }
  return 0;
}