#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t, n, d;
  // cin >> t;
  // while (t--)
  {
    cin >> n >> d;
    vector<int> v(n);
    vector<int> diff;
    for (auto &i : v)
    {
      cin>>i;
    }
    for (int i = 0; i < n; i=(i+(d-1)))
    {
      diff.push_back(*max_element(v.begin()+i, v.begin()+i+d) - *min_element(v.begin()+i, v.begin()+i+d));
    }
    cout<<*max_element(diff.begin(),diff.end())<<"\n";
    diff.clear();
    v.clear();
  }
  return 0;
}