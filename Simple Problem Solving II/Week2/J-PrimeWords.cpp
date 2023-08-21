// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// bool isPrime(int n){
//   if(n<2) return false;
//   for (int i = 2; i * i <= n; i++)
//   {
//     if (n % i == 0){
//       return false;
//     }
//   }
//   return true;
// }

// int main()
// {
//   string l;
//   int sum, a= -1;
//   while (cin>>l)
//   {
//     sum = 0;
//     for (int i = 0; i < l.length(); i++)
//     {
//       if ((l.at(i) >= 'A') && (l.at(i) <= 'Z'))
//       {
//         sum += l[i]-'A'+27;
//       }
//       else if ((l.at(i) >= 'a') && (l.at(i) <= 'z'))
//       {
//         sum += l[i]-'a'+1;
//       }
//     }

//     if (isPrime(sum))
//     {
//       cout<<"It is a prime word."<<"\n";
//     }
//     else
//     {
//       cout<<"It is not a prime word."<<"\n";
//     }
//   }
//   return 0;
// }
#include <bits/stdc++.h>
int Prime[2000] = {};
void sieve()
{
  int i, j;
  for (i = 2; i < 2000; i++)
  {
    if (Prime[i] == 0)
    {
      for (j = 2; i * j < 2000; j++)
        Prime[i * j] = 1;
    }
  }
}
int main()
{
  sieve();
  char str[100];
  while (scanf("%s", str) == 1)
  {
    int sum = 0, i;
    for (i = 0; str[i]; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
        sum += str[i] - 'a' + 1;
      else
        sum += str[i] - 'A' + 27;
    }
    if (Prime[sum] == 0)
    {
      puts("It is a prime word.");
    }
    else
    {
      puts("It is not a prime word.");
    }
  }
  return 0;
}