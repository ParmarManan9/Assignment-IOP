// WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include <stdio.h>
#include <string.h>

int findLength(char str[]) {
    return strlen(str);
}

int main() {
    char str[100];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = findLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
