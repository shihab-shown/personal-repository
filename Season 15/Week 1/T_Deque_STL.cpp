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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    deque<int> dq;
    for(int i=0;i<k;i++)
    {
      while(!dq.empty() && a[i]>=a[dq.back()])
      {
        dq.pop_back();
      }
      dq.push_back(i);
    }
    
    for(int i=k;i<n;i++)
    {
      cout<<a[dq.front()]<<" ";
      while(!dq.empty() && dq.front()<=i-k)
      {
        dq.pop_front();
      }
      while(!dq.empty() && a[i]>=a[dq.back()])
      {
        dq.pop_back();
      }
      dq.push_back(i);
    }
    cout<<a[dq.front()]<<endl;
  }
  return 0;
}