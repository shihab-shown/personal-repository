#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  int h1[n1],h2[n2],h3[n3];
  int sum1=0,sum2=0,sum3=0;
  for(int i=0;i<n1;i++)
  {
    cin>>h1[i];
    sum1+=h1[i];
  }
  for(int i=0;i<n2;i++)
  {
    cin>>h2[i];
    sum2+=h2[i];
  }
  for(int i=0;i<n3;i++)
  {
    cin>>h3[i];
    sum3+=h3[i];
  }
  int i=0,j=0,k=0;
  while(sum1!=sum2 || sum2!=sum3)
  {
    if(sum1>=sum2 && sum1>=sum3)
      sum1-=h1[i++];
    else if(sum2>=sum1 && sum2>=sum3)
      sum2-=h2[j++];
    else
      sum3-=h3[k++];
  }
  cout<<sum1<<endl;
  return 0;
}