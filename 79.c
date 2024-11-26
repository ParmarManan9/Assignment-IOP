// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY  X AND Y .
#include <stdio.h>
void swap(int* x, int* y)
{
  int z=*x;
  *x = *y;
  *y = z;
}
int main()
{
  int x,y;
  printf("Enter x : ");
  scanf("%d",&x);
  printf("Enter y : ");
  scanf("%d",&y);
  printf("Before swap : %d %d \n",x,y);
  swap(&x,&y);
  printf("After swap : %d %d",x,y);
  return 0;
}
