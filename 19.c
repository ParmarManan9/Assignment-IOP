// Read a character and check whether it is a small case letter or not using conditional operator.
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a letter : ");
  scanf("%c",&ch);
  int x = (int) ch;
  (x>96) ? ((x<123) ? printf("Small Case Letter.") : printf("Not a Small Case Letter")) : printf("Not a Small Case Letter.");
}
