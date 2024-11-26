// Read time in Hour,Minute,Second and convert it into total seconds
#include<stdio.h>
int main()
{
  int x,y,z;
  printf("Enter Hour ");
  scanf("%d",&x);
  printf("Enter Minute ");
  scanf("%d",&y);
  printf("Enter Second ");
  scanf("%d",&z);
  printf("Total Seconds is %d",x*3600 + y*60 +z);
  return 0;
}
