#include<stdio.h>
int main()
{
  int n;
  printf("Enter Size of Array : ");
  scanf("%d",&n);
  int arr[n];
  int firMax=-1,secMax=-1;
  printf("Enter Numbers : ");
  for(int i=0 ; i<n ; i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i] >= firMax) firMax=arr[i];
    }
  for(int i=0 ; i<n ; i++)
    {
      if((arr[i] >= secMax) && (arr[i] != firMax)) secMax=arr[i];
    }
  printf("Maximum Number : %d\n",firMax);
  printf("Second Maximum Number : %d\n",secMax);
}
