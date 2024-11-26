#include <stdio.h>
int main()
{
  int n;
  printf("Enter odd number : ");
  scanf("%d",&n);
  int nsp=n/2,nst=1;
  for(int i=1 ; i<=n ; i++)
    {
      for(int j=1 ; j<=nsp ; j++) // SPACES
        printf("  ");
      for(int j=1 ; j<=nst ; j++) // STARS
        printf("* ");
      if(i<=nsp+1)
      {
        nsp--;
        nst+=2;
      }
      else
      {
        nsp++;
        nst-=2;
      }
      printf("\n");
    }
  return 0;
}
