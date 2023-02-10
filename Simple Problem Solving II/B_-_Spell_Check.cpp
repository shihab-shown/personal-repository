#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s = "Timur";
  sort (s.begin(), s.end());
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    sort (s1.begin(), s1.end());
    if(s1 == s)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}