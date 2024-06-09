#include<stdio.h>

int main()
{
  int n, i, j;
  scanf("%d", &n);
  for(i = 1; i <= n; i++)
  {
    for(j = 1; j <= i; j++)
    {
     if((i % 2 == 0 && j % 2 == 0)||(i % 2 != 0 && j % 2 != 0))
     {
       printf("AA");
     }
     else
     {
       printf("BB");
     }
    }
    printf("\n");
  }
  return 0;
}
