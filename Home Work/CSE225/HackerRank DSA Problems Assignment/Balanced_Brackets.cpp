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
    string s;
    cin>>s;
    stack<char> st;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st.push(s[i]);
      else if(s[i]==')')
      {
        if(st.empty() || st.top()!='(')
        {
          flag=1;
          break;
        }
        else
          st.pop();
      }
      else if(s[i]=='}')
      {
        if(st.empty() || st.top()!='{')
        {
          flag=1;
          break;
        }
        else
          st.pop();
      }
      else if(s[i]==']')
      {
        if(st.empty() || st.top()!='[')
        {
          flag=1;
          break;
        }
        else
          st.pop();
      }
    }
    if(flag==1 || !st.empty())
      cout<<"NO\n";
    else
      cout<<"YES\n";
  }
  return 0;
}