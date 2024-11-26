#include<stdio.h>
int main()
{
  int n;
  printf("Enter Size of Array : ");
  scanf("%d",&n);
  int arr1[n], arr2[n], arr3[n];
  printf("Enter Numbers of First Array : \n");
  for(int i=0 ; i<n ; i++)
    {
      scanf("%d",&arr1[i]);
    }
  printf("Enter Numbers of Second Array : \n");
  for(int i=0 ; i<n ; i++)
    {
      scanf("%d",&arr2[i]);
    }
  printf("Sum of Both Array : \n");
  for(int i=0 ; i<n ; i++)
    {
      arr3[i] = arr1[i] + arr2[i];
      printf("%d ",arr3[i]);
    }
}
