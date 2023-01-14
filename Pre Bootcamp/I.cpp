#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }


int main()
{
  fast
  int n;
  cin>>n;
  vector<int> a(n);
  cin>>a;
  sort(a.begin(),a.end());
  int max=a[n-1];
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==max)
    {
      count++;
    }
  }
  cout<<count;
  return 0;
}