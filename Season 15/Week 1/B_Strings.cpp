#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  string a, b;
  cin>>a>>b;
  int n=a.length(), m=b.length();
  cout<<n<<" "<<m<<endl;
  cout<<a+b<<"\n";
  char temp=a[0];
  a[0]=b[0];
  b[0]=temp;
  cout<<a<<" "<<b;
  return 0;
}