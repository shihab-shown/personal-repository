#include <bits/stdc++.h>
using namespace std;

int main()
{
  bool a[10];
  fill(a,a+10,true);
  for (int i = 0; i < 10; i++)
  {
    if(a[i])cout<<"True"<<i<<endl;
  }
  
  return 0;
}