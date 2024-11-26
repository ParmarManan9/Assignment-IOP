//  READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A  LIST OF NUMBERS READ.
#include <stdio.h>
int main()
{
  int n;
  int x,sum=0;
  printf("Enter Numbers : ");
  for(int i=1 ; i<=n ; i++)
    {
      scanf("%d",&x);
      if(x>0) sum+=x;
      else break;
    }
  printf("Sum of numbers is : %d",sum);
}
