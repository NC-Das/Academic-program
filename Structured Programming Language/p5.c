#include<stdio.h>
#include<math.h>

int prime(int num);

int main()
{
 long long int num, tem, sum = 1, tem2, digit, div;
 while( scanf("%lld", &num) != EOF){
  tem2  = num;
  tem  = num;
  num = tem;
  do{
    sum = 1;
    while(num != 0)
    {
    digit = num % 10;
    num /= 10;
    sum *= digit;
    }
    //printf("%d ",sum);
    tem++;
    num = tem;
    if(tem > 1000000000)
      break;
    if(tem2 >10 && prime(tem2)==1)
      break;
  }while(tem2 != sum);

  if(tem2 == sum)
  {
    printf("%lld\n",--tem);
  }
  else
  {
    printf("not found\n");
  }
  }
  return 0;
}

int prime(int num)
{
  int ct = 0, i;
  if(num == 1 || num == 0)
  {
    ct = 1;
  }
  if(num == 2)
  {
    ct = 0;
  }
  for(i = 2; i <= sqrt(num)+1; i++)
  {
    if(num % i == 0)
    {
     ct = 1;
     break;
    }
  }
  if(ct == 0)
    return 1;
  else
    return 0;
}
