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
    float q,p;
    cin>>q>>p;
    if(q>1000)
    {
      cout<<fixed<<setprecision(6)<<q*p*0.9<<endl;
    }
    else
    {
      cout<<fixed<<setprecision(6)<<q*p<<endl;
    }
  }
  return 0;
}