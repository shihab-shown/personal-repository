#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

unordered_map<string, string> slogans;
int main()
{
  int n;
  cin >> n;
  getchar();
  while (n--)
  {
    string firstLine, secondLine;
    getline(cin, firstLine);
    getline(cin, secondLine);
    slogans[firstLine] = secondLine;
    slogans[secondLine] = firstLine;
  }

  int q;
  cin >> q;
  getchar();
  while(q--)
  {
    string s;
    getline(cin, s);
    auto it = slogans.find(s);
    if (it != slogans.end())
    {
      cout << it->second << "\n";
    }
  }
  return 0;
}