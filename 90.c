#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int lengthIncludingSpaces = 0, lengthExcludingSpaces = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string with spaces

    ptr = str; // Pointer to the start of the string

    // Loop through the string using the pointer
    while (*ptr != '\0') {
        lengthIncludingSpaces++; // Increment for each character
        if (*ptr != ' ' && *ptr != '\n') {
            lengthExcludingSpaces++; // Increment if the character is not a space or newline
        }
        ptr++; // Move the pointer to the next character
    }

    // Print the lengths
    printf("Length including spaces: %d\n", lengthIncludingSpaces - 1); // Exclude the null terminator
    printf("Length excluding spaces: %d\n", lengthExcludingSpaces);

    return 0;
}
