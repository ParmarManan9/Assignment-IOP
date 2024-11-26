//  WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI  NUBERS.
#include <stdio.h>
void fib(int n)
{
  int a=1,b=1;
  int sum=0;
  printf("Fibonacci Numbers : 1 1 ");
  for(int i=1 ; i<=n-2 ; i++)
    {
      sum=a+b;
      a+=sum;
      printf("%d ",sum);
    }
}
int main()
{
  int n;
  printf("Enter a Number : ");
  scanf("%d",&n);
  fib(n);
}
