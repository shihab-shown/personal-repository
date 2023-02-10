#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s;
  int i =0;
  while (cin>>s && s!="*")
  {
    if(s=="Hajj")
    {
      cout<<"Case "<<++i<<": Hajj-e-Akbar"<<endl;
    }
    else
    {
      cout<<"Case "<<++i<<": Hajj-e-Asghar"<<endl;
    }
  }
  
  return 0;
}