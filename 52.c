#include<stdio.h>
int main()
{
  int n;
  printf("Enter number : ");
  scanf("%d",&n);
  int nsp=n-1;
  for(int i=1 ; i<=n ; i++)
    {
      for(int j=1 ; j<=nsp ; j++)
        printf("  ");
      for(int j=1 ; j<=i ; j++)
          printf("%d ",j);
      for(int j=1 ; j<=i-1 ; j++)
        printf("%d ",i-j);
      printf("\n");
      nsp--;
    }
  return 0;
}
