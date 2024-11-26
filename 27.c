// CHECK WHETHER A NO IS PRIME OR NOT.
#include<stdio.h>
int main()
{
  int N;
  printf("Enter positive a Number : ");
  scanf("%d",&N);
  int check=0;
  for(int i=2 ; i<=N/2 ; i++)
    {
      if(N%i==0)
        check=1;
        break;
    }
  if(check==0) printf("Prime Number");
    if(check==1) printf("Not a Prime Number");
}
