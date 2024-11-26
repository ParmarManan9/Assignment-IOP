// Time period of Earth converted in minutes,hours & days.
#include <stdio.h>
int main()
{
  float x;
  x = 31558150;
  printf("Earth takes %f seconds to rotate.\n",x);
  printf("Earth takes %f minutes to rotate.\n",x/60);
  printf("Earth takes %f hours to rotate.\n",x/3600);
  printf("Earth takes %f days to rotate.",x/3600/24);
  return 0;
}
