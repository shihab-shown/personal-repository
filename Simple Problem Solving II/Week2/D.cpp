#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime[100002];
void seive(){
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i < 100002; i++)
  {
    isPrime[i] = true;
  }
  
  for (int i = 2; i*i < 100002; i++)
  {
    if (isPrime[i])
    {
      for (int j = i*i; j < 100002; j+=i)
      {
        isPrime[j] = false;
      }
    }
  }
}

int main()
{
  int t,n;
  bool f;
  seive();
  cin>>t;
  while (t--)
  {
    cin>>n;
    f = isPrime[n];
    if (f)
    {
      cout<<"yes"<<"\n";
    }
    else
    {
      cout<<"no"<<"\n";
    }
  }
  return 0;
}