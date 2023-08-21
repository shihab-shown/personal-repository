#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s1,s2;
  cin>>s1>>s2;
  int n1=s1.size();
  int n2=s2.size();
  if(n1==n2)
  {
    for(int i=0;i<n1;i++)
    {
      cout<<s1[i]<<s2[i];
    }
  }
  else if(n1>n2)
  {
    for(int i=0;i<n2;i++)
    {
      cout<<s1[i]<<s2[i];
    }
    for(int i=n2;i<n1;i++)
    {
      cout<<s1[i];
    }
  }
  else
  {
    for(int i=0;i<n1;i++)
    {
      cout<<s1[i]<<s2[i];
    }
    for(int i=n1;i<n2;i++)
    {
      cout<<s2[i];
    }
  }
  return 0;
}