// WRITE A PROGRAM IN C FOR THE FOLLOWING. AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS.
#include<stdio.h>
int main()
{
  float x;
  printf("Enter Consumption in unit : ");
  scanf("%f",&x);
  if(x>0 && x<=200) printf("Amount to be paid : %f",x*0.50);
  else if(x>200 && x<=400) printf("Amount to be paid : %f",(x-200)*0.65 + 100);
  else if(x>400 && x<=600) printf("Amount to be paid : %f",(x-400)*0.85 + 230);
  else printf("Amount to be paid : %f",(x-600)*1.25 + 425);
  return 0;
}
