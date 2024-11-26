//Read three numbers and print maximum using conditonal operator.
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
  (x>y) ? ( (x>z) ? printf("%d is Greatest",x) : printf("%d is Greatest",z) ) : ( (y>z) ? printf("%d is Greatest",y) : printf("%d is Greatest",z) );
  return 0;
}
