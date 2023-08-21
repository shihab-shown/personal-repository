#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string in,temp;
  //set<string>s;
  map<string, set<string>>dictionary;
  while (cin>>in && in[0]!='X')
  {
    temp = in;
    sort(in.begin(), in.end());
    dictionary[in].insert(temp);
  }
  while (cin>>in && in[0]!='X')
  {
    sort(in.begin(), in.end());
    if (dictionary.count(in)>0)
    {
      for (auto i = dictionary[in].begin(); i != dictionary[in].end(); i++)
      {
        cout<<*i<<"\n";
      }
    }
    else
    {
      cout<<"NOT A VALID WORD"<<"\n";
    }
    cout<<"******"<<"\n";
  }
  return 0;
}