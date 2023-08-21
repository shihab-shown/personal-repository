#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int a[3],b[3],cta=0,ctb=0;
  for (int i = 0; i < 3; i++)
  {
    cin>>a[i];
  }
  for (int i = 0; i < 3; i++)
  {
    cin>>b[i];
  }
  for (int i = 0; i < 3; i++)
  {
    if(a[i]>b[i])
    {
      cta++;
    }
    else if(a[i]<b[i])
    {
      ctb++;
    }
  }
  cout<<cta<<" "<<ctb<<endl;
  return 0;
}