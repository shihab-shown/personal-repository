#include <bits/stdc++.h>
using namespace std;

int main()
{
	double l=5.044;
	double li,a[6];
	for(int i=0;i<6;i++)
	{
		cin>>li;
		a[i]=(l-li)*(l-li);
		cout<<a[i]<<endl;
	}	
	//Starndard Deviation
	double sum=0;
	for(int i=0;i<6;i++)
	{
		sum+=a[i];
	}
	double sd=sqrt(sum/6);
	cout<<sd<<endl;
	return 0;
}