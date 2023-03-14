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
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      if(sum<=0)
      {
        sum *= -1;
        sum++;
        ans += sum;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}