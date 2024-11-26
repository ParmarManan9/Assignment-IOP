// READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
#include <stdio.h>
int main()
{
  float a,b,c,d,e,x;
  printf("Enter Marks of 5 Subjects out of 100 : ");
  scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
  x = (a+b+c+d+e)/5;
  if(x>60) printf("First Division");
  if(50<x && x<=60) printf("Second Division");
  if(30<x && x<=50) printf("Third Division");
  if(x<30) printf("Fail");

  // Using Else If
  // if(x>60) printf("First Division");
  // else if(50<x && x<=60) printf("Second Division");
  // else if(30<x && x<=50) printf("Third Division");
  // else printf("Fail");
  return 0;
}
