#include <stdio.h>

int main() {
    int n;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int source[n], destination[n];

    // Input elements for the source array
    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    // Copy elements from source to destination in reverse order
    for (int i = 0; i < n; i++) {
        destination[i] = source[n - i - 1];
    }

    // Display the original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }
    printf("\n");

    // Display the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
