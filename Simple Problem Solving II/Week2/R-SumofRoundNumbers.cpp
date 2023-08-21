#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int power(int a, int n){
  int p = 1;
  for (int i = 1; i <= n; i++)
  {
    p*=a;
  }
  return p;
}

vector<int>v;
int solve(int n){
  int rem,num,i=0,count = 0;
  while (n!=0)
  {
    rem = n%10;
    num = rem * power(10, i);
    i++;
    n/=10;
    if (rem!=0)
    {
      v.push_back(num);
      count++;
    }
  }
  return count;
}

int main()
{
  int t,n,count;
  cin>>t;
  while (t--)
  {
    cin>>n;
    count = solve(n);
    cout<<count<<"\n";
    for (auto &&i : v)
    {
      cout<<i<<"\n";
    }
    v.clear();
  }
  return 0;
}