/*
Let's write all the positive integer numbers one after another from 
1 without any delimiters (i.e. as a single string). It will be the infinite sequence starting with 123456789101112131415161718192021222324252627282930313233343536...
Your task is to print the 
k-th digit of this sequence.
*/
// Sample Input 0
// 7
// Sample Output 0
// 7
// Sample Input 1
// 21
// Sample Output 1
// 5
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast
  int k;
  cin>>k;
  vector<int> v;
  stack<int> s;
  for (int i = 1; i <= k; ++i)
  {
    if(i < 10)
    {
      v.push_back(i);
      continue;
    }
    int temp = i;
    while(temp)
    {
      s.push(temp%10);
      temp /= 10;
    }
    while(!s.empty())
    {
      v.push_back(s.top());
      s.pop();
    }
  }
  cout<<v[k-1];
  return 0;
}