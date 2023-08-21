#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  cin>>t;
  while(t--)
  {
    char c;
    cin>>c;
    if(c=='B' || c=='b')
      cout<<"BattleShip"<<endl;
    else if(c=='C' || c=='c')
      cout<<"Cruiser"<<endl;
    else if(c=='D' || c=='d')
      cout<<"Destroyer"<<endl;
    else if(c=='F' || c=='f')
      cout<<"Frigate"<<endl;
  }
  return 0;
}