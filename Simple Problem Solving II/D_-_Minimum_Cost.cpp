#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n,m,x;
  cin>>n>>m>>x;
  int a[m];
  for(int i=0;i<m;i++)
  {
    cin>>a[i];
  }
  int l=0,r=0;
  for(int i=0;i<m;i++)
  {
    if(a[i]<x)
    {
      l++;
    }
    else if(a[i]>x)
    {
      r++;
    }
  }
  cout<<min(l,r)<<endl;
  return 0;
}