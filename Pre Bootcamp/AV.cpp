#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool zeroCheck(int a){
  while(a){
    int rem;
    rem = a%10;
    if(rem == 0){
      return true;
    }
    a /= 10;
  }
  return false;
}

int main()
{
  fast
  int t,count;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    count = 0;
    if(a == 0){
      count++;
    }
    for (int i = a; i <= b; i++)
    {
      if(zeroCheck(i))
      {
        count++;
      }
    }
    printf("%d/%d\n",count,b-a+1);
    
  }
  return 0;
}