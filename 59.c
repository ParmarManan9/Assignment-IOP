#include<stdio.h>
int main()
{
  int arr1[10], arr2[10];
  printf("Enter Numbers of First Array : \n");
  for(int i=0 ; i<10 ; i++)
    {
      scanf("%d",&arr1[i]);
    }
  printf("Enter Numbers of Second Array : \n");
  for(int i=0 ; i<10 ; i++)
    {
      scanf("%d",&arr2[i]);
    }
  for(int i=0 ; i<10 ; i++)
    {
      int z = arr1[i];
      arr1[i] = arr2[i];
      arr2[i] = z;
    }
  printf("\n After Swapping, First Array : ");
  for(int i=0 ; i<10 ; i++)
    {
      printf("%d ",arr1[i]);
    }
  printf("\n After Swapping, Second Array : ");
  for(int i=0 ; i<10 ; i++)
    {
      printf("%d ",arr2[i]);
    }
}
