#include <stdio.h>

int main() {
    int n, i, num, max, min;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if there are no elements
    if (n <= 0) {
        printf("Invalid input! Number of elements must be greater than 0.\n");
        return 1; // Exit the program
    }

    // Ask for the first number and initialize max and min
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;

    // Loop through the remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Update max and min
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    // Print the result
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
