// CHECK WHETHER A NO IS ARMSTRONG OR NOT.
#include <stdio.h>
int main()
{
  int n;
  printf("Enter n : ");
  scanf("%d",&n);
  int sum=0,x=n;
  for(int i=1 ; n>0 ; i++)
    {
      int ld=n%10;
      sum += (ld*ld*ld);
      n/=10;
    }
  if(sum==x) printf("Armstrong number");
  else printf("Not an Armstrong number");
  return 0;
}
