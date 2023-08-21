#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int h1,h2,m1,m2,t1,t2;
  scanf("%d:%d",&h1,&m1);
  scanf("%d:%d",&h2,&m2);
  t1 = (h1*60)+m1;
  t2 = (h2*60)+m2;
  int t3 = (t1+t2)/2;
  int h = t3/60;
  int m = t3%60;
  printf("%02d:%02d\n",h,m);
  return 0;
}