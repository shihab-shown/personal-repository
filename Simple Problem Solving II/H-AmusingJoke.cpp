#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a, b, p;
  cin>>a>>b>>p;
  if ((a.length() + b.length()) != p.length())
  {
    cout<<"NO"<<endl;
    return 0;
  }
  a.append(b);
  sort(a.begin(), a.end());
  sort(p.begin(), p.end());
  if (a == p)
  {
    cout<<"YES"<<endl;
  } else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
