// Sum of all Odd and Even Numbers between 1 to N
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int x=0,y=0;
  for(int i=1 ; i<=N ; i++)
    {
      if(i%2==0) x= x+i;
      if(i%2!=0) y= y+i;
    }
  printf("Sum of Odd Numbers = %d\n",y);
  printf("Sum of EVen Numbers = %d",x);
}
