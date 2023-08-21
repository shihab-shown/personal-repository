#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n,k;
  cin>>n>>k;
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    pq.push(x);
  }
  int count=0;
  while(pq.top()<k && pq.size()>1)
  {
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    pq.push(a+2*b);
    count++;
  }
  if(pq.top()<k)
    cout<<-1;
  else
    cout<<count;

  return 0;
}