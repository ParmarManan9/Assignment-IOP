// Read Three Numbers and Print Maximum Using Logical Operators
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
  if(x>y && x>z) 
    printf("%d is Greatest",x);
  if(y>z && y>x) 
    printf("%d is Greatest",y);
  if(z>y && z>x) 
    printf("%d is Greatest",z);
  return 0;
}
