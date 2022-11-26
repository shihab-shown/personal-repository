#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime[1001];
void seive(){
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i < 1001; i++)
  {
    isPrime[i] = true;
  }
  
  for (int i = 2; i*i < 1001; i++)
  {
    if (isPrime[i])
    {
      for (int j = i*i; j < 1001; j+=i)
      {
        isPrime[j] = false;
      }
    }
  }
}

int main()
{
  int t,a,b,count;
  cin>>t;
  int h = 1;
  seive();
  while (h<=t)
  {
    cin>>a>>b;
    count = 0;
    for (int i = a; i <= b; i++)
    {
      if (isPrime[i])
      {
        count++;
      }
    }
    cout<<"Case "<<h<<": "<<count<<"\n";
    h++;
  }
  return 0;
}