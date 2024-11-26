#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  for(int i=1 ; i<=N ; i++)
    {
      for(int j=1 ; j<=i ; j++)
        printf("%c ",i+64);
      printf("\n");
    }
  return 0;
}
