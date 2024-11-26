#include <stdio.h>
#include <ctype.h>  // For tolower() function

int countVowels(char *str);

int main() {
    char str[100];  // Array to store the input string

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    // Count the number of vowels
    int vowels = countVowels(str);

    // Output the result
    printf("The number of vowels in the given string is: %d\n", vowels);

    return 0;
}

// Function to count vowels using a pointer
int countVowels(char *str) {
    int count = 0;

    // Traverse the string using the pointer
    while (*str != '\0') {
        // Convert to lowercase to handle both uppercase and lowercase vowels
        char ch = tolower(*str);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }

        // Move the pointer to the next character
        str++;
    }

    return count;
}
