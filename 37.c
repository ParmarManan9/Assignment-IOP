// PRINT 2,4,6,8,10,12.........N.
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  for(int i=2 ; i<=N ; i=i+2)
    printf("%d ",i);
}
