// Convert Time from seconds to hours,minutes & seconds.
#include <stdio.h>
int main()
{
  int x,h,m,s;
  printf("Enter Time in Seconds : ");
  scanf("%d",&x);
  h = x / 3600;
  printf("Time in Hours is %d\n",h);
  m = (x % 3600) / 60;
  printf("Time in Minute is %d\n",m);
  s = (x % 3600) % 60;
  printf("Time in Seconds is %d",s);
  return 0;
}
