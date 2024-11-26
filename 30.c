// REVERSE OF A GIVEN NO.
#include <stdio.h>
int main()
{
  int n;
  printf("Enter n : ");
  scanf("%d",&n);
  int x=n,r=0;
  for(int i=1 ; n>0 ; i++)
    {
      int ld=n%10;
      r = r*10 + ld;
      n/=10;
    }
  printf("Reverse of %d is %d",x,r);
  return 0;
}
