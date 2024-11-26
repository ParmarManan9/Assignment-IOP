// Total marks and Percentage of student
#include <stdio.h>
int main()
{
  int a,b,c,d,e,total;
  float pr;
  printf("Enter marks of 5 subjects out of 100\n");
  scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
  total=a+b+c+d+e;
  printf("Total marks of student is %d\n", total);
  pr=total*100/500;
  printf("Percentage of Student is %f", pr);
  return 0;
}
