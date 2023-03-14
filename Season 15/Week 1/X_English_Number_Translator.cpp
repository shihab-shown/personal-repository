#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  fast
      string s;
  while (getline(cin, s))
  {
    stringstream ss(s);
    string word;
    map<string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    m["four"] = 4;
    m["five"] = 5;
    m["six"] = 6;
    m["seven"] = 7;
    m["eight"] = 8;
    m["nine"] = 9;
    m["ten"] = 10;
    m["eleven"] = 11;
    m["twelve"] = 12;
    m["thirteen"] = 13;
    m["fourteen"] = 14;
    m["fifteen"] = 15;
    m["sixteen"] = 16;
    m["seventeen"] = 17;
    m["eighteen"] = 18;
    m["nineteen"] = 19;
    m["twenty"] = 20;
    m["thirty"] = 30;
    m["forty"] = 40;
    m["fifty"] = 50;
    m["sixty"] = 60;
    m["seventy"] = 70;
    m["eighty"] = 80;
    m["ninety"] = 90;
    m["hundred"] = 100;
    m["thousand"] = 1000;
    m["million"] = 1000000;
    int ans = 0;
    int temp = 0;
    while (ss >> word)
    {
      if (word == "negative")
      {
        cout<<"-";
      }
      else if (word == "hundred")
      {
        temp *= 100;
      }
      else if (word == "thousand")
      {
        temp *= 1000;
        ans += temp;
        temp = 0;
      }
      else if (word == "million")
      {
        temp *= 1000000;
        ans += temp;
        temp = 0;
      }
      else
      {
        temp += m[word];
      }
    }
    ans += temp;  
    cout << ans << endl;
  }
  return 0;
}