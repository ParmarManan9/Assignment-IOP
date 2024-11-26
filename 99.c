#include <stdio.h>
#include <ctype.h>  // For tolower() function

// Function to count vowels in a file
int countVowels(FILE *file);

int main() {
    char filename[100];
    FILE *file;
    int vowels;

    // Input the name of the file
    printf("Enter the name of the file to read: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }

    // Count the vowels in the file
    vowels = countVowels(file);

    // Output the result
    printf("The number of vowels in the file is: %d\n", vowels);

    // Close the file
    fclose(file);

    return 0;
}

// Function to count vowels in a file
int countVowels(FILE *file) {
    int count = 0;
    char ch;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Convert character to lowercase to handle both uppercase and lowercase vowels
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}
