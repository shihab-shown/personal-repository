#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
int main()
{
  int t;
  cin>>t;
  char str[100];
  int cnt = 0, temp = 0;
  while (t--)
  {
    cin>>str;
    if (str[0] == 'b')
    {
      if (dq.empty())
      {
        printf("No job for Ada?\n");
      }
      else
      {
        if (cnt & 1)
        {
          cout << dq.front() << '\n';
          dq.pop_front();
        }
        else
        {
          cout << dq.back() << '\n';
          dq.pop_back();
        }
      }
    }
    else if (str[0] == 'f')
    {
      if (dq.empty())
      {
        printf("No job for Ada?\n");
      }
      else
      {
        if (cnt & 1)
        {
          cout << dq.back() << '\n';
          dq.pop_back();
        }
        else
        {
          cout << dq.front() << '\n';
          dq.pop_front();
        }
      }
    }
    else if (str[0] == 'r')
      cnt++;
    else if (str[0] == 'p')
    {
      cin>>temp;
      if (cnt & 1)
        dq.push_front(temp);
      else
        dq.push_back(temp);
    }
    else if (str[0] == 't')
    {
      cin>>temp;
      if (cnt & 1)
        dq.push_back(temp);
      else
        dq.push_front(temp);
    }
  }
}