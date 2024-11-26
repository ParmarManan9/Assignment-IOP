// Calcule Gross Salary.  Gross salary = Basic salary + HRA + Other Allowances.
#include <stdio.h>
int main()
{
  int x,y,z;
  printf("Enter Basic salary : ");
  scanf("%d",&x);
  printf("Enter HRA : ");
  scanf("%d",&y);
  printf("Enter Other Allowances : ");
  scanf("%d",&z);
  printf("Gross Salary is %d",x+y+z);
  return 0;
}
