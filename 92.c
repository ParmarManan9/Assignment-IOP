#include <stdio.h>

int main() {
    int n;

    // Input the size of the list
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! The number of integers must be greater than 0.\n");
        return 1;
    }

    int numbers[n];  // Array to store the integers
    int *ptr = numbers;  // Pointer to the array

    // Input the integers
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); // Input using pointer arithmetic
    }

    // Find the largest number using pointers
    int max = *ptr; // Initialize max with the first element
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    // Display the largest number
    printf("The largest number is: %d\n", max);

    return 0;
}
