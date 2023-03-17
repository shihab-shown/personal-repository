#include <iostream>
#include "timeStamp.h"
using namespace std;

TimeStamp::TimeStamp()
{
  hour = 0;
  minute = 0;
  second = 0;
}
TimeStamp::TimeStamp(int s, int m, int h)
{
  hour = h;
  minute = m;
  second = s;
}
void TimeStamp::SetTime(int s, int m, int h)
{
  hour = h;
  minute = m;
  second = s;
}
void TimeStamp::GetTime(int &s, int &m, int &h)
{
  h = hour;
  m = minute;
  s = second;
}
void TimeStamp::Print()
{
  cout << second << ":" << minute << ":" << hour << endl;
}
bool TimeStamp::operator==(TimeStamp t)
{
  return (hour == t.hour && minute == t.minute && second == t.second);
}
bool TimeStamp::operator!=(TimeStamp t)
{
  return (hour != t.hour || minute != t.minute || second != t.second);
}
bool TimeStamp::operator<(TimeStamp t)
{
  if (hour < t.hour)
    return true;
  else if (hour == t.hour)
  {
    if (minute < t.minute)
      return true;
    else if (minute == t.minute)
    {
      if (second < t.second)
        return true;
      else
        return false;
    }
    else
      return false;
  }
  else
    return false;
}
bool TimeStamp::operator>(TimeStamp t)
{
  if (hour > t.hour)
    return true;
  else if (hour == t.hour)
  {
    if (minute > t.minute)
      return true;
    else if (minute == t.minute)
    {
      if (second > t.second)
        return true;
      else
        return false;
    }
    else
      return false;
  }
  else
    return false;
}
bool TimeStamp::operator<=(TimeStamp t)
{
  if (hour < t.hour)
    return true;
  else if (hour == t.hour)
  {
    if (minute < t.minute)
      return true;
    else if (minute == t.minute)
    {
      if (second <= t.second)
        return true;
      else
        return false;
    }
    else
      return false;
  }
  else
    return false;
}
bool TimeStamp::operator>=(TimeStamp t)
{
  if (hour > t.hour)
    return true;
  else if (hour == t.hour)
  {
    if (minute > t.minute)
      return true;
    else if (minute == t.minute)
    {
      if (second >= t.second)
        return true;
      else
        return false;
    }
    else
      return false;
  }
  else
    return false;
}
