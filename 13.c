// Check if the given number is odd or even
#include <stdio.h>
int main()
{
  int x;
  printf("Enter a number : ");
  scanf("%d",&x);
  if(x%2 == 0) printf("Number is Even");
  else printf("Number is Odd");

  // Ternary Operator
  // (x%2 == 0) ? printf("Number is Even") : printf("Number is Odd");
  return 0;
}
