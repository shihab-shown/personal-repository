#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//function to find factorial of a number
ll factorial(int n)
{
  if(n==0)
    return 1;
  return n*factorial(n-1);
}

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<factorial(n)<<"\n";
  }
  return 0;
}