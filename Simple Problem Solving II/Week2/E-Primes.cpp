#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime(ll n){
  if(n<2) return false;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0){
      return false;
    }
  }
  return true;
}
int main()
{
  ll n;
  cin>>n;
  bool f = isPrime(n-2);
  if (f)
  {
    cout<<2<<" "<<(n-2)<<endl;
  } else
  {
    cout<< -1 <<endl;
  }
  
  
  return 0;
}