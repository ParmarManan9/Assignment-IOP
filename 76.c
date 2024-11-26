// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>
void oddeven(int n)
{
  if(n%2==0) printf("Even");
  else printf("Odd");
}
int main()
{
  int n;
  printf("Enter a Number : ");
  scanf("%d",&n);
  oddeven(n);
}
