// reverse a queue
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  deque<int> q;
  q.push_back(1);
  q.push_back(2);
  q.push_back(3);
  q.push_back(4);
  q.push_back(5);
  // print the queue
  for(auto i:q)
    cout<<i<<" ";
  cout<<endl;
  // reverse the queue
  reverse(q.begin(),q.end());
  // print the queue
  for(auto i:q)
    cout<<i<<" ";
  cout<<endl;
  return 0;
}