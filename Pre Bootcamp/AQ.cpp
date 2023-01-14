#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n;
  cin>>n;
  int x,y,z,sumX=0,sumY=0,sumZ=0;
  for(int i=0;i<n;i++)
  {
    cin>>x>>y>>z;
    sumX+=x;
    sumY+=y;
    sumZ+=z;
  }
  if(sumX==0 && sumY==0 && sumZ==0)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}