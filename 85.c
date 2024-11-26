// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
#include <stdio.h>
#include <ctype.h>

void checkVowel(char ch){
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) printf("Vovel");
  else printf("Not Vovel");
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkVowel(ch);
    return 0;
}
