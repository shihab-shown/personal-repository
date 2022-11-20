#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n , c;
  cin>>t;
  while (t--)
  {
    vector<int>a;
    c = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
      if ((n % i == 0))
      {
        a.push_back(i);
        if ((n / i != i))
        {
          a.push_back(n / i);
        }
      }
    }
    for(auto i : a){
      if (i%2==0)
      {
        c++;
      }
    }
    cout<<c<<endl;
  }
  return 0;
}