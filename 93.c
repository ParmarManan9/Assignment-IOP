#include <stdio.h>
#include <ctype.h> // For isspace() function

int main() {
    char str[200];  // Array to store the input string
    char *ptr;      // Pointer to traverse the string
    int wordCount = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string with spaces

    ptr = str; // Initialize pointer to the start of the string

    // Traverse the string
    while (*ptr != '\0') {
        // Check if the current character is the start of a word
        if (!isspace(*ptr) && (ptr == str || isspace(*(ptr - 1)))) {
            wordCount++;
        }
        ptr++; // Move the pointer to the next character
    }

    // Output the word count
    printf("The number of words in the given string is: %d\n", wordCount);

    return 0;
}
