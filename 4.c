// Convert Temperature from Fahrenheit to Celcius
#include <stdio.h>
int main()
{
  float t,ans;
  printf("Enter Temperature in Fahrenheit : ");
  scanf("%f",&t);
  ans = (t-32)*5/9;
  printf("Temperature in Celcius is %f",ans);
  return 0;
}
