#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  vector <int> a(t);
  for (int i = 0; i < t; i++)
  {
    cin>>a[i];
  }
  for (int i = 0; i < t; i++)
  {
    sort (a.begin(), a.end());
    cout<<a[t-1]<<"\n";
  }
  
  return 0;
}