#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int t;
  double l, w, r, a, b;
  while(scanf("%d", &t) == 1)
  {
    while(t--){
    cin>>l;
    w = (6*l)/10;
    a = l*w;
    r = l/5;
    b = PI*r*r;
    a = a-b;
    printf("%.2lf %.2lf\n", b, a);
    }
  }
  return 0;
}