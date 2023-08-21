#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n,q;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>q;
  int l,r;
  int preSum[n];
  preSum[0]=a[0];
  for(int i=1;i<n;i++)
  {
    preSum[i]=preSum[i-1]+a[i];
  }
  while(q--)
  {
    cin>>l>>r;
    if(l==0)
    {
      cout<<preSum[r]<<endl;
    }
    else
    {
      cout<<preSum[r]-preSum[l-1]<<endl;
    }
  }
  return 0;
}