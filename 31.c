// PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int sum=0;
  while(N>0)
  {
    int ld = N%10;
    N=N/10;
    sum = sum + ld;
  }
   printf("Sum of Digits : %d",sum);
}
