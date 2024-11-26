#include<stdio.h>
int main()
{
  int arr[10];
  int countP=0,countN=0,countZ=0;
  printf("Enter Numbers : ");
  for(int i=0 ; i<10 ; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i] >> 0) countP+=1;
      else if(arr[i] << 0) countN+=1;
      else countZ+=1;
    }
  printf("Positive Numbers : %d \n",countP);
  printf("Negative Numbers : %d \n",countN);
  printf("Zeros : %d \n",countZ);
}
