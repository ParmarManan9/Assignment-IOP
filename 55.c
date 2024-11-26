#include<stdio.h>
int main()
{
  int arr[10],countOdd=0,countEven=0;
  printf("Enter Numbers : ");
  for(int i=0 ; i<10 ; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]%2 != 0)countOdd+=1;
      else countEven+=1;
    }
  printf("Odd Numbers : %d \n",countOdd);
  printf("Even Numbers : %d \n",countEven);
}
