#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string, string>a;

int main()
{
  int n, m;
  string name,ip,command;
  cin>>n>>m;
  while (n--)
  {
    cin>>name>>ip;
    a[ip] = name;
  }
  while (m--)
  {
    cin>>command>>ip;
    ip.pop_back();
    cout<<command<<" "<<ip<<"; #"<<a[ip]<<"\n";
  }

  return 0;
}