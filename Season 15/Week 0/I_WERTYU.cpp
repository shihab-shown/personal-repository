#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

char decode(char a)
{
  if(a=='1') return '`';
  if(a=='2') return '1';
  if(a=='3') return '2';
  if(a=='4') return '3';
  if(a=='5') return '4';
  if(a=='6') return '5';
  if(a=='7') return '6';
  if(a=='8') return '7';
  if(a=='9') return '8';
  if(a=='0') return '9';
  if(a=='-') return '0';
  if(a=='=') return '-';
  if(a=='W') return 'Q';
  if(a=='E') return 'W';
  if(a=='R') return 'E';
  if(a=='T') return 'R';
  if(a=='Y') return 'T';
  if(a=='U') return 'Y';
  if(a=='I') return 'U';
  if(a=='O') return 'I';
  if(a=='P') return 'O';
  if(a=='[') return 'P';
  if(a==']') return '[';
  if(a=='\\') return ']';
  if(a=='S') return 'A';
  if(a=='D') return 'S';
  if(a=='F') return 'D';
  if(a=='G') return 'F';
  if(a=='H') return 'G';
  if(a=='J') return 'H';
  if(a=='K') return 'J';
  if(a=='L') return 'K';
  if(a==';') return 'L';
  if(a=='\'') return ';';
  if(a=='X') return 'Z';
  if(a=='C') return 'X';
  if(a=='V') return 'C';
  if(a=='B') return 'V';
  if(a=='N') return 'B';
  if(a=='M') return 'N';
  if(a==',') return 'M';
  if(a=='.') return ',';
  if(a=='/') return '.';
  if(a==' ') return ' ';
  if(a=='\n') return '\n';
}

int main()
{
  fast
  char a;
  while(cin.get(a))
  {
    cout<<decode(a);
  }
  return 0;
}