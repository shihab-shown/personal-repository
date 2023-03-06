#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int initial, first, second, third;
  while(cin >> initial >> first >> second >> third)
  {
    if(initial == 0 && first == 0 && second == 0 && third == 0)
      break;
    int ans = 1080;
    ans += (initial - first + 40) % 40 * 9;
    ans += (second - first + 40) % 40 * 9;
    ans += (second - third + 40) % 40 * 9;
    cout << ans << endl;
  }
  return 0;
}