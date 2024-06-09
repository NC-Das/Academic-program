#include<stdio.h>

int main()
{
 int start, ending, increment, i;
 printf("Staring: ");
 scanf("%d", &start);
 printf("Ending: ");
 scanf("%d", &ending);
 printf("Increment: ");
 scanf("%d", &increment);

  i = start;
  printf("u$$\tBDT\n");
  do{
    printf("%d\t%.1lf\n", i, i * 82.6);
    if(ending < start)
    {
      printf("Not Running the process\n");
    }
    i += increment;
  }while(i <= ending);

 return 0;
}
