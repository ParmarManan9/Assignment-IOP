// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include<stdio.h>
int max(int arr[],int n)
{
  int max=-1;
  for(int i=0 ; i<n ; i++)
    {
      if(max <= arr[i]) max = arr[i];
    }
  return max;
}
int main()
{
  int n;
  printf("Enter Size of Array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter Numbers : ");
  for(int i=0 ; i<n ; i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("Maximum Number is : %d",max(arr,n));
}
