#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int nsp=N-1;
  int nst=1;
  for(int i=1 ; i<=N ; i++)  // OUTER LOOP
    {
      for(int j=1 ; j<=nsp ; j++)  // SPACES
        printf("  ");
      for(int j=1 ; j<=nst ; j++)  // STARS
        printf("* ");
      printf("\n");
      nsp--;
      nst+=2;
    }
  return 0;
}
