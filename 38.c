// PRINT 1,4,9,16,25,.........N.
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  for(int i=1 ; i<=N ; i++)
    printf("%d ",i*i);
}
