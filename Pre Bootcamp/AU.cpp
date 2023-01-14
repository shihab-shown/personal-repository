#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int main()
{
  fast
  int n,a,k;
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    k = n/2;
    a = n-k;
    if (gcd(a,k)==1)
    {
      cout<<k<<" "<<a<<endl;
      break;
    }
    else
    {
      for (int i = k-1; i >= 1; i--)
      {
        a=n-i;
        if (gcd(i,a)==1)
        {
          cout<<i<<" "<<a<<endl;
          break;
        }
      }
      break;
    }
  }
  
  
  return 0;
}