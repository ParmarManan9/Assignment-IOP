#include <stdio.h>

int main() {
    int number;
    int *ptr; // Pointer to the variable

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    ptr = &number; // Pointer points to the address of the variable 'number'

    // Calculate the square and cube using the pointer
    int square = (*ptr) * (*ptr);         // Square of the number
    int cube = (*ptr) * (*ptr) * (*ptr); // Cube of the number

    // Display the results
    printf("The square of %d is: %d\n", *ptr, square);
    printf("The cube of %d is: %d\n", *ptr, cube);

    return 0;
}
