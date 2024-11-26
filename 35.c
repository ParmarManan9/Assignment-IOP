// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int sum=0;
  for(int i=1 ; N>0 ; i++)
    {
      int ld = N%10;
      sum+=ld;
      N=N/10;
    }
   printf("Sum of Digits : %d",sum);
}
