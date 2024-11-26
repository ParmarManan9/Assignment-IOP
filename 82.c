// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. 
#include <stdio.h>
int fact(int x)
{
  if(x==1 || x==0) return 1;
  return x * fact(x-1);
}
int ncr(int n,int r)
{
 return fact(n)/(fact(r) * fact(n-r));
}
int main()
{
  int n,r;
  printf("Enter n : ");
  scanf("%d",&n);
  printf("Enter r : ");
  scanf("%d",&r);
  printf("%d",ncr(n,r));
}
