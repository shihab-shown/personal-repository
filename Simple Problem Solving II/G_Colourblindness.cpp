#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    int n,count=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
      if(a[i]==b[i])
      {
        continue; 
      }
      else if(a[i]=='G' && b[i]=='B' || a[i]=='B' && b[i]=='G')
      {
        continue;
      }
      else
      {
        count++;
      }
    }
    if(count==0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}