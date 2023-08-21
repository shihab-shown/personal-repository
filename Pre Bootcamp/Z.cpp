#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  set <string> s;
  string str,curStr="";
  while(cin>>str)
  {
    for(int i=0;i<str.size();i++)
    {
      if(isalpha(str[i]))
      {
        curStr+=tolower(str[i]);
      }
      else
      {
        if(curStr.size()>0)
        {
          s.insert(curStr);
          curStr.clear();
        }
      }
    }
    if(curStr.size()>0)
    {
      s.insert(curStr);
      curStr.clear();
    }
  }
  for(auto it=s.begin();it!=s.end();it++)
  {
    cout<<*it<<endl;
  }
  return 0;
}