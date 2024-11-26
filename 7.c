// Area of Triangle
#include <stdio.h>
int main()
{
  float b,h,area;
  printf("Enter Base of Triangle : ");
  scanf("%f",&b);
  printf("Enter Height of Triangle : ");
  scanf("%f",&h);
  area = 0.5*b*h;
  printf("Area of Triangle is %f",area);
  return 0;
}
