// WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
#include <stdio.h>
int prime(int n)
{
  int x=1;
  for(int i=n/2 ; i>2 ; i--)
    {
      if(n%i == 0) { x=0; break; }
    }
  return x;
}
int main()
{
  int n;
  printf("Enter a Number : ");
  scanf("%d",&n);
  printf("%d",prime(n));
}
