#include <bits/stdc++.h>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

bool isOperator(char c)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    return true;
  return false;
}

int getPrecedence(char c)
{
  if (c == '^')
    return 3;
  else if (c == '*' || c == '/')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return 0;
}


string toPostfix(string infix)
{
  StackType<char> s;
  string postfix;
  for (int i = 0; i < infix.length(); i++)
  {
    if (infix[i] == ' ')
      continue;
    else if (isdigit(infix[i]))
    {
      while (i < infix.length() && isdigit(infix[i]))
      {
        postfix += infix[i];
        i++;
      }
      i--;
      postfix += ' ';
    }
    else if (infix[i] == '(')
      s.Push(infix[i]);
    else if (infix[i] == ')')
    {
      while (!s.IsEmpty() && s.Top() != '(')
      {
        postfix += s.Top();
        s.Pop();
      }
      s.Pop();
    }
    else
    {
      while (!s.IsEmpty() && getPrecedence(infix[i]) <= getPrecedence(s.Top()))
      {
        postfix += s.Top();
        s.Pop();
      }
      s.Push(infix[i]);
    }
  }
  while (!s.IsEmpty())
  {
    postfix += s.Top();
    s.Pop();
  }
  return postfix;
}

double evaluatePostfix(string postfix)
{
  StackType<double> s;
  for (int i = 0; i < postfix.length(); i++)
  {
    if (postfix[i] == ' ')
      continue;
    else if (isdigit(postfix[i]))
    {
      double operand = 0;
      while (i < postfix.length() && isdigit(postfix[i]))
      {
        operand = (operand * 10) + (postfix[i] - '0');
        i++;
      }
      i--;
      s.Push(operand);
    }
    else
    {
      double val1 = s.Top();
      s.Pop();
      double val2 = s.Top();
      s.Pop();
      switch (postfix[i])
      {
      case '+':
        s.Push(val2 + val1);
        break;
      case '-':
        s.Push(val2 - val1);
        break;
      case '*':
        s.Push(val2 * val1);
        break;
      case '/':
        s.Push(val2 / val1);
        break;
      case '^':
        s.Push(pow(val2, val1));
        break;
      }
    }
  }
  return s.Top();
}

int main()
{
  string s[100],infix;
  int i = 0;
  while (cin >> s[i])
  {
    infix += s[i];
    i++;
  }
  string postfix = toPostfix(infix);
  try
  {
    cout << evaluatePostfix(postfix) << endl;
  }
  catch (FullStack)
  {
    cout << "Invalid expression" << endl;
  }
  catch (EmptyStack)
  {
    cout << "Invalid expression" << endl;
  }
  return 0;
}