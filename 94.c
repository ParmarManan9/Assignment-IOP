#include <stdio.h>

int main() {
    char str[100], reversedStr[100];
    char *ptr = str;           // Pointer to the original string
    char *revPtr = reversedStr; // Pointer to the reversed string
    int length = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string with spaces (if any)

    // Find the length of the string
    while (*ptr != '\0' && *ptr != '\n') { // Check for null terminator or newline
        length++;
        ptr++;
    }

    // Reset pointer to the end of the string
    ptr--;  // Move back to the last valid character (before '\0')

    // Copy the string in reverse order
    while (ptr >= str) {
        *revPtr = *ptr;
        revPtr++;
        ptr--;
    }

    // Null-terminate the reversed string
    *revPtr = '\0';

    // Display the reversed string
    printf("Reversed string: %s\n", reversedStr);

    return 0;
}
