// Read Three Numbers and Print Max.
#include <stdio.h>
int main()
{
  int x,y,z;
  printf("Enter first number : ");
  scanf("%d",&x);
  printf("Enter second number : ");
  scanf("%d",&y);
  printf("Enter third number : ");
  scanf("%d",&z);
  if(x>=y && x>=z) printf("%d is Greatest",x);
  else if (y>=z && y>=x) printf("%d is Greatest",y);
  else printf("%d is Greatest",z);
  return 0;
}
