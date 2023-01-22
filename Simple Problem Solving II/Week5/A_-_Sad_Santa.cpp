#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string n;
  int x = 0, count = 0;
  cin>>n;
  for (int i = 0; i < n.length(); i++)
  {
    x = n[i] - '0';
    if(x%2 != 0)
    {
      count++;
    }
  }
  if(count == n.length()){
    cout<<"HAPPY"<<"\n";
  }
  else{
    cout<<"SAD"<<"\n";
  }
  return 0;
}