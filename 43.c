// WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES  REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
#include <stdio.h>
int main()
{
  float sales;
  printf("Enter Sales : ");
  scanf("%f",&sales);
  if(sales<=500) printf("Commision is : %f",sales*5/100);
  else if(500<sales && sales<=2000) printf("Commision is : %f",(sales-500)/10 + 35);
  else if(2000<sales && sales<=5000) printf("Commision is : %f",(sales-2000)*12/100 + 185);
  else printf("Commision is : %f",sales*125/1000);
return 0;
}
