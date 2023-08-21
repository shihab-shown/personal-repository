#include <bits/stdc++.h>
using namespace std;

int main()
{
  char ch;
  double x1[10],y1[10],x2[10],y2[10];
  int i=0;
  while(1)
  {
    cin>>ch;
    if(ch=='*') break;
    if(ch=='r')
    {
      cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }
    i++;
  }
  double x,y;
  int n=0;
  while(1)
  {
    cin>>x>>y;
    if(x==9999.9 && y==9999.9) break;
    n++;
    int flag=0;
    for (int i = 0; i < 10; ++i)
    {
      if(x>x1[i] && x<x2[i] && y>y2[i] && y<y1[i])
      {
        cout<<"Point "<<n<<" is contained in figure "<<i+1<<endl;
        flag=1;
      }
    }
    if(flag==0)
      cout<<"Point "<<n<<" is not contained in any figure"<<endl;
  }
  return 0;
}