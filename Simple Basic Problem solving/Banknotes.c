/*Online problem
In this problem you have to read an integer value and
calculate the smallest possible number of banknotes 
in which the value may be decomposed. The possible
banknotes are 100, 50, 20, 10, 5, 2 and 1.
Print the read value and the list of banknotes.*/
  
#include <stdio.h>

int main()
{
  int a,temp=0;
  int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
  printf("Enter a value\n");
  scanf("%d",&a);
  temp=a;
  while(temp>=100)
  {
    temp=temp-100;
    count1++;
  }
  
  while(temp>=50)
  {
    temp=temp-50;
    count2++;
  }
  
  while(temp>=20)
  {
    temp=temp-20;
    count3++;
  }
  
  while(temp>=10)
  {
    temp=temp-10;
    count4++;
  }
  
  while(temp>=5)
  {
    temp=temp-5;
    count5++;
  }
  
  while(temp>=2)
  {
    temp=temp-2;
    count6++;
  }
  
  while(temp>=1)
  {
    temp=temp-1;
    count7++;
  }
  
  printf("%d note(s) of 100 dollar\n",count1);
  printf("%d note(s) of 50 dollar\n",count2);
  printf("%d note(s) of 20 dollar\n",count3);  
  printf("%d note(s) of 10 dollar\n",count4);
  printf("%d note(s) of 5 dollar\n",count5);
  printf("%d note(s) of 2 dollar\n",count6);
  printf("%d note(s) of 1 dollar\n",count7);
return 0;
}
