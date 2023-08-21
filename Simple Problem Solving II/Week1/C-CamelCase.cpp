#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count = 0, n = s.length();
  for (int i = 1; i < n; i++){
    if(s[i]>='A' && s[i]<='Z'){
      count++;
    }
  }
  cout<<count+1<<endl;
  return 0;
}