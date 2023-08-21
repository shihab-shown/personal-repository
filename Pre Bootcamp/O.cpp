#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int a,b,m;
  a=(k*l)/nl;
  b=c*d;
  m=p/np;
  cout<<min(a,min(b,m))/n<<endl;
  return 0;
}