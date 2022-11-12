// My first project 
// I made a clock which runs for infinite time and it beeps 
// in every four seconds(**kinda)  but it runs fine.


#include <stdio.h>
#include <windows.h>
int main()
{
  int h=0,m=0,s=0;
  while (1)
  {
    system("cls");
    s++;
    // if(s%4==0)
    // {
    //     Beep(500,600);
    // }
    if (s>59)
    {
      m++;
      s=0;
    }
    if(m>59)
    {
      h++;
      m=0;
    }
    if(h>12)
    {
      h=1;
    }
    printf("\n Clock:");
    printf("\n %02d:%02d:%02d",h,m,s);
    Sleep(1000);
  }
  return 0;
}
