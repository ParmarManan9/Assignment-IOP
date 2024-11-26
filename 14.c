//CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a character : ");
  scanf("%c",&ch);
  int x =(int) ch;
  if(x>=65 && x<=90) printf("Capital Letter");
  else if(x>=97 && x<=122) printf("Small Letter");
  else if(x>=48 && x<=57) printf("Digit");
  else printf("Special Letter");
  return 0;
}
