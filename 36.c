// PRINT 1,3,5,7,9.........N.
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  for(int i=1 ; i<=N ; i=i+2)
    printf("%d ",i);
}
