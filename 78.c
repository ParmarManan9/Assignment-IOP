// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT.
#include <stdio.h>
void arm(int n)
{
  int x=n,ans=0;
    for(int i=1 ; n>0 ; i++)
      {
        int ld=n%10;
        ans += ld*ld*ld;
        n/=10;
      }
  if(x==ans) printf("Armstrong");
  else printf("Not a Armstrong");
}
int main()
{
  int n;
  printf("Enter a Number : ");
  scanf("%d",&n);
  arm(n);
}
