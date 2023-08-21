#include <bits/stdc++.h>
using namespace std;
map<string, int> st;
map<string, int>::iterator itr = st.begin();
int main()
{
  int n, y;
  short type;
  string x;
  cin >> n;
  while (n--)
  {
    cin >> type;
    if (type == 1)
    {
      cin >> x >> y;
      itr = st.find(x);
      if (itr == st.end())
        st.insert({x, y});
      else
        itr->second += y;
    }
    else if (type == 2)
    {
      cin >> x;
      itr = st.find(x);
      if (itr != st.end())
        st.erase(itr);
    }
    else if (type == 3)
    {
      cin >> x;
      itr = st.find(x);
      if (itr != st.end())
        cout << itr->second << endl;
      else
        cout << "0" << endl;
    }
  }
  return 0;
}