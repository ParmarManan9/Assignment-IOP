// Simple Calculator Using Switch
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter Operator : ");
  scanf("%c",&ch);
  int a,b;
  printf("Enter two Numbers : ");
  scanf("%d %d",&a,&b);
  switch(ch)
    {
      case '+':
      printf("%d",a+b);
      break;
      case '-':
      printf("%d",a-b);
      break;
      case '*':
      printf("%d",a*b);
      break;
      case '/':
        if(b != 0)
        printf("%d",a/b);
        else printf("Error! divison by Zero");
      break;
    }
}
