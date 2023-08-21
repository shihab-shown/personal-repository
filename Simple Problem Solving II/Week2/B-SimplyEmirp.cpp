#include <bits/stdc++.h>
using namespace std;
bool prime(long long int n)
{
 for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0){
      return false;
    }
  }
  return true;
}
long long int reverse(long long int n)
{
  long long int remainder, reversed = 0;
  while (n > 0)
  {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;
  }
  return reversed;
}
int main()
{
  long long int n;
  while ((scanf("%lld", &n)) == 1)
  {
    
    if (prime(n))
    {
      if (prime(reverse(n)))
      {
        cout << n << " is emirp." << endl;
      }
      else
      {
        cout << n << " is prime." << endl;
      }
    }
    else
    {
      cout << n << " is not prime." << endl;
    }
  }
  return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// bool prime(long long int n)
// {
//   for (int i = 2; i * i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       return false;
//     }
//   }
//   return true;
// }
// long long int reverse(long long int n)
// {
//   long long int remainder, reversed = 0;
//   while (n > 0)
//   {
//     remainder = n % 10;
//     reversed = reversed * 10 + remainder;
//     n /= 10;
//   }
//   return reversed;
// }
// int main()
// {
//   long long int n, rn;
//   bool p, ep;
//   while ((scanf("%lld", &n)) == 1)
//   {
//     p = ep = false;
//     p = prime(n);
//     rn = reverse(n);
//     if (n != rn)
//     {
//       ep = prime(rn);
//     }
//     if (ep && p)
//     {
//       cout << n << " is emirp." << endl;
//     }
//     else if (p)
//     {
//       cout << n << " is prime." << endl;
//     }
//     else
//     {
//       cout << n << " is not prime." << endl;
//     }
//   }
//   return 0;
// }
