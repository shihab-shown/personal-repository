/* In this program you have to guess a random number and 
it shows in how many attemps you have guessed.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main()
{
  // This part is for generating a random number
  int num,guess,atmp=1,i;
  srand(time(0));
  num = (rand()%100);
  
  // And this part is for guessing the number

    printf("Guess the Number\n");
    scanf("%d",&guess);
  for(i=0;i<atmp;i++)
    {
      if(guess>num)
      {
        printf("Guess a lower number\n");
        scanf("%d",&guess);
      }
      else if(guess<num)
      {
        printf("Guess a higher number\n");
        scanf("%d",&guess);
      }
      else
      {
        printf("You guessed in %d attemp\n",atmp);
        break;
      }
      atmp++;
    }
  return 0;
}