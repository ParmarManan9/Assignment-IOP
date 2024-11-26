#include <stdio.h>
#include <math.h>

// Function to flip the last N digits of a number
void flip(int *number, int n);

int main() {
    int number, n;

    // Input the number and the number of digits to flip
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    // Call the flip function
    flip(&number, n);

    // Print the modified number
    printf("Modified number: %d\n", number);

    return 0;
}

// Function to flip the last N digits of a number
void flip(int *number, int n) {
    int num = *number;
    int flipped = 0;
    int power = 1;

    // Flip the last N digits
    for (int i = 0; i < n; i++) {
        int digit = num % 10;
        flipped = flipped * 10 + digit;
        num /= 10;
    }

    // Restore the flipped digits back in the original position
    *number = *number / pow(10, n) * pow(10, n) + flipped;
}
