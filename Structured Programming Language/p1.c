#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int DigitCount(int );
int IntegerSum(int );
int IntegerReverse(int );
void EvenOddExtract(int );
void DigitPosition(int , int );
int PrimeFactor(int );

int main()
{
  int num, pressValue;
  do{
  printf("\n\nPress 1: Digit count\n");
  printf("Press 2: Integer Sum\n");
  printf("Press 3: Integer Reverse\n");
  printf("Press 4: Even Odd Extract\n");
  printf("Press 5: Digit Position\n");
  printf("Press 6: Prime Factor\n");
  printf("Press 7: Exit\n\n");

  scanf("%d", &pressValue);
  switch(pressValue)
  {
   int digit;
    case 1:
          printf("Enter your number : ");
          scanf("%d", &num);
          printf("%d number digit is %d\n",num ,DigitCount(num));
          break;
    case 2:
          printf("Enter your number : ");
          scanf("%d", &num);
          printf("%d number individul digit summation is %d\n",num ,IntegerSum(num));
          break;
    case 3:
          printf("Enter your number : ");
          scanf("%d", &num);
          printf("%d Reverse number is %d\n",num ,IntegerReverse(num));
          break;
    case 4:
          printf("Enter your number : ");
          scanf("%d", &num);
          EvenOddExtract(num);
          break;
    case 5:
          printf("Enter your number: ");
          scanf("%d", &num);
          printf("Enter your searching digit: ");
          scanf("%d", &digit);
          DigitPosition(num, digit);
          break;
    case 6:
          printf("Enter your number : ");
          scanf("%d", &num);
          PrimeFactor(num);
          break;
     case 7:
         exit(0);
    default:
           printf("Please Press Correct number!\n");
           break;
  }
  }while(1);
  return 0;
}


int DigitCount(int num)
{
  int ct = 0;
  if(num == 0)
    ct++;
  while(num != 0)
  {
    num /= 10;
    ct++;
  }
  return ct;
}

int IntegerSum(int num)
{
  int sum = 0;
  while(num != 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int IntegerReverse(int num)
{
  int rev = 0;
  while(num != 0)
  {
    rev = (rev * 10) + (num % 10);
    num /= 10;
  }
  return rev;
}

void EvenOddExtract(int num)
{
  int i = 0, j = 0, digit, k;
  int even[50], odd[50];
  while(num != 0)
  {
    digit = num % 10;
    num /= 10;
    if(digit % 2)
    {
     odd[i++] = digit;
    }
    else
    {
      even[j++] = digit;
    }
  }
  printf("Even: ");
  for(k = j-1; k >=0; k--)
  {
    printf("%d ", even[k]);
  }

  printf("\nOdd: ");
  for(k = i-1; k >=0; k--)
  {
    printf("%d ", odd[k]);
  }
}

void DigitPosition(int num, int digit)
{
  int ct = 0, ct1 = 0, dig;
  while(num != 0)
  {
    dig = num % 10;
    num /= 10;
    ct++;
    if(digit == dig)
    {
      ct1 = 1;
      break;
    }
  }
  if(ct1 == 1)
  {
    printf("%d digit postion is %d\n", digit, ct);
  }
  else if(num == 0 && digit == 0)
  {
    printf("%d digit postion is 1\n", digit);
  }
  else
  {
    printf("%d this digit is not found !\n", digit);
  }
}

int PrimeFactor(int num)
{
  int i;
  printf("%d number prime factor: ",num);
  for(i = 2; i <= num; i++)
  {
    if(num % i == 0)
    {
      int ct = 0, k;
       for(k = 2; k <= sqrt(i); k++)
       {
         if(i % k == 0)
         {
           ct = 1;
           break;
         }
       }
       if(i == 2 )
       {
         ct = 0;
       }

       if(ct == 0)
       {
       printf("%d   ",i);
       }
    }
  }
  if(num == 1)
  {
    printf("do not any prime factor!\n");
  }
  printf("\n");
}
