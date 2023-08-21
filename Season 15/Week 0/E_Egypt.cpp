#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int a,b,c;
  while(cin>>a>>b>>c)
  {
    if(a==0 && b==0 && c==0)
      break;
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
      cout<<"right"<<endl;
    else
      cout<<"wrong"<<endl;
  }
  return 0;
}