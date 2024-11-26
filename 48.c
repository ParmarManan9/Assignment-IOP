#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int nsp=N-1;
  int nst=1;
  for(int i=1 ; i<=N ; i++) 
    {
      for(int j=1 ; j<=nsp ; j++)
        printf("  ");
      for(int j=1 ; j<=nst ; j++)
        printf("%d ",j);
      printf("\n");
      nsp--;
      nst++;
    }
  return 0;
}
