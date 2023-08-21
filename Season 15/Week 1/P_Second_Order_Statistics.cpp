#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  bool flag=false;
  for(int i=0;i<n-1;i++)
  {
    if(a[i]!=a[i+1])
    {
      cout<<a[i+1];
      flag=true;
      break;
    }
  }
  if(!flag)
  {
    cout<<"NO";
  }
  return 0;
}