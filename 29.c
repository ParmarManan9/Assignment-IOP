// CHECK WHETHER A NO IS PALINDROME OR NOT
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a  number : ");
  scanf("%d",&n);
  int ans=0,x=n;
  for(int i=1 ; n>0 ; i++)
    {
      int ld=n%10;
      ans = ans*10 + ld;
      n/=10;
    }
  if(ans == x) printf("Palindrome");
  else printf("Not a Palindrome");
}
