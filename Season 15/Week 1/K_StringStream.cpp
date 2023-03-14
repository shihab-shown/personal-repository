#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string s;
  cin >> s;
  //stringstream ss(s);
  s+= ",";
  vector<int>Integers;
  int x;
  string temp = "";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ',')
    {
      Integers.push_back(stoi(temp));
      temp = "";
    }
    else
    {
      temp += s[i];
    }
  }
  // while (ss >> x)
  // {
  //   Integers.push_back(x);
  // }
  for (int i = 0; i < Integers.size(); i++)
  {
    cout << Integers[i] << endl;
  }
  return 0;
}