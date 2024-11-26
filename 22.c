// PROGRAM TO CALCULATE FACTORIAL OF A NO.
#include<stdio.h>
int main()
{
  int x=1,n;
  printf("Enter a Number : ");
  scanf("%d",&n);
  for(int i=1; i<=n ; i++)
    {
      x=x*i;
    }
  printf("Factorial of %d is %d",n,x);
}
