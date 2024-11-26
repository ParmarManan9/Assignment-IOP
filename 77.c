// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include <stdio.h>
void pal(int n)
{
  int x=n,ans=0;
  for(int i=1 ; n>0 ; i++)
    {
      int ld=n%10;
      ans = ans*10 + ld;
      n/=10;
    }
  if(x==ans) printf("Palindrome");
  else printf("Not a Palindrome");
}
int main()
{
  int n;
  printf("Enter a Number : ");
  scanf("%d",&n);
  pal(n);
}
