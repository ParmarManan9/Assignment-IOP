//  READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE. 
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int check=0;  // 0 Means Prime
  for(int i=2 ; i<=N/2 ; i++)
    {
      if(N%i==0) 
        check=1;   // 1 Means Composite
      break;
    }
  if(check==0) printf("Prime Number");
  else printf("Composite Number");
}
