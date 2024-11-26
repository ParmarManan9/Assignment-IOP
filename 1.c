// Calculating Simple Intrest
#include <stdio.h>
int main() {
  float p, r, t, si;
  printf("Enter Principle Amount : ");
  scanf("%f",&p);
  printf("Enter Rate of Intrest : ");
  scanf("%f",&r);
  printf("Enter Time : ");
  scanf("%f",&t);
  si = (p * r * t) / 100;
  printf("Simple Intrest is %f", si);
  return 0;
}
