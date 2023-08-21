#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

int main()
{
  fast
  int t;
  //cout<<"Enter t"<<"\n";
  cin>>t;
  while(t--)
  {
    int n;
    //cout<<"Enter n"<<"\n";
    cin>>n;
    // vector<int> a(n),b(n);
    // cin>>a>>b;
     int count=0;
    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=n-1;i>0;--i)
    {
      while(a[0]!=a[i] && b[0]!=b[i])
      {
        a[i]--;
        b[i]--;
        count++;
      }
      while(a[0]!=a[i])
      {
        a[i]--;
        count++;
      }
      while(b[0]!=b[i])
      {
        b[i]--;
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}