#include<stdio.h>
int main()
{
  int arr[10],sum=0;
  printf("Enter Numbers : ");
  for(int i=0 ; i<10 ; i++)
    {
      scanf("%d",&arr[i]);
      sum+=arr[i];
    }
  printf("Sum : %d",sum);
}
