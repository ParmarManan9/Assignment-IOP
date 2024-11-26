// Swapping 2 vaiables with 3rd variable.
#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter First Number : ");
  scanf("%d",&a);
  printf("Enter Second Number : ");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("After Swapping First Number is %d\n",a);
  printf("After Swapping Second Number is %d\n",b);
  return 0;
}
