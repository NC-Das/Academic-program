#include<stdio.h>

void Binary_conversion(int num);
void Octal_conversion(int num);
void Hexa_conversion(int num);


int main()
{
  int i;
  printf("Decimal Number\tBinary Number\tOctal Number\tHexadecimal Number\n");
  for(i = 0; i <= 100; i++)
  {
    printf("%d\t\t",i);
    Binary_conversion(i);
    printf("\t\t");
    Octal_conversion(i);
    printf("\t\t");
    Hexa_conversion(i);
  }
  return 0;
}

void Binary_conversion(int num)
{
  int i = 0, j;
  int arr[50];
  if(num == 0)
   printf("0");
  while(num != 0)
  {
    arr[i++] = num % 2;
    num /= 2;
  }
  for(j = i-1; j >= 0; j--)
  {
    printf("%d",arr[j]);
  }
}

void Octal_conversion(int num)
{
  int i = 0, j;
  int arr[50];
  if(num == 0)
   printf("0");
  while(num != 0)
  {
    arr[i++] = num % 8;
    num /= 8;
  }
  for(j = i-1; j >= 0; j--)
  {
    printf("%d",arr[j]);
  }
}

void Hexa_conversion(int num)
{
  int i = 0, j, digit;
  char ch[50];
  if(num == 0)
   printf("0");
  while(num != 0)
  {
     digit= num % 16;
     if(digit>9)
     {
       ch[i++]=digit+55;
     }
     else
     {
      ch[i++] = digit+48;
     }
    num /= 16;
  }
  for(j = i-1; j >= 0; j--)
  {
    printf("%c",ch[j]);
  }
  printf("\n");
}
