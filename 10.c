// Cutoff Marks of student using given formula
#include <stdio.h>
int main()
{
  int CM, M, P, C, E;
  printf("Enter Marks of Mathematics out of 200 : ");
  scanf("%d",&M);
  printf("Enter Marks of Physics out of 200 : ");
  scanf("%d",&P);
  printf("Enter Marks of Chemistry out of 200 : ");
  scanf("%d",&C);
  printf("Enter Marks in Entrance Examination out of 100 : ");
  scanf("%d",&E);
  CM = M/2 + P/2 + C/2 + E;
  printf("Cutoff Marks of Student is %d", CM);
  return 0;
}
