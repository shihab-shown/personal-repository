#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s;
  cin >> s;

  stack<char> st;
  int count = 0, len = s.length();

  for (int i = 0; i < len; i++)
  {
    if (s[i] == '<')
    {
      if (s[i + 1] == '/')
      {
        count--;
        for (int j = 0; j < 2 * count; j++)
        {
          cout << " ";
        }
        cout << "</" << st.top() << ">" << endl;
        st.pop();
      }
      else
      {
        st.push(s[i + 1]);
        for (int j = 0; j < 2 * count; j++)
        {
          cout << " ";
        }
        cout << "<" << s[i + 1] << ">" << endl;
        count++;
      }
      i++;
    }
  }
  return 0;
}