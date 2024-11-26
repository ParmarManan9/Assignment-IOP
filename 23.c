// READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).
#include<stdio.h>
int main()
{
  int x,y,z=1;
  printf("Enter Base : ");
  scanf("%d",&x);
  printf("Enter Power : ");
  scanf("%d",&y);
  for(int i=1;i<=y;i++)
    {
      z *= x;
    }
  printf("%d ^ %d = %d",x,y,z);
}
