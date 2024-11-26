// Print Table of Any Number
#include<stdio.h>
int main()
{
  int x,y,i=1;
  printf("Enter a number : ");
  scanf("%d",&x);
  while(i<11)
    {
      y = x*i;
      i++; 
      printf("%d\n",y);
    }
}
