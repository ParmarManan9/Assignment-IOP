// PRINT 1/1!+2/2!+3/3!+4/4!,.........N.
#include <stdio.h>
int fact(float n)
{
  float x=1;
  for(float i=1 ; i<=n ; i++)
    x*=i;
  return x;
}
int main()
{
  float n;
  printf("Enter a number : ");
  scanf("%f",&n);
  float sum=0;
  for(float i=1 ; i<=n ; i++)
    {
      sum+=i/fact(i);
    }
  printf("%f",sum);
  return 0;
}
