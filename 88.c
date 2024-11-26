#include <stdio.h>

int main() {
    int n;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int source[n], destination[n];
    int *sourcePtr = source;      // Pointer to the source array
    int *destinationPtr = destination; // Pointer to the destination array

    // Input elements for the source array
    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (sourcePtr + i));
    }

    // Copy elements from source to destination using pointers
    for (int i = 0; i < n; i++) {
        *(destinationPtr + i) = *(sourcePtr + i);
    }

    // Display the copied elements
    printf("Elements in the destination array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(destinationPtr + i));
    }

    printf("\n");
    return 0;
}
