#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  char a,b;
  cin>>a>>b;
  int n;
  cin>>n;
  if(n%2==0)
  {
    cout<<"undefined";
    return 0;
  }
  if(a==b)
  {
    cout<<"undefined";
    return 0;
  }
  n%=4;
  string s = "v<^>";
  for(int i=0;i<4;i++)
  {
    if(s[i]==a)
    {
      if(s[(i+n)%4]==b)
      {
        cout<<"cw";
        return 0;
      }
      else
      {
        cout<<"ccw";
        return 0;
      }
    }
  }
  return 0;
}