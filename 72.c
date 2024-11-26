#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    // Create a temporary array to hold the rotated elements
    int temp[n];

    // Calculate the effective number of rotations
    d = d % n;

    // Store the last d elements in the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the elements of the original array
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    // Copy the rotated elements from the temporary array back to the original array
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    // Rotate the array
    rotateArray(arr, n, d);

    // Output the rotated array
    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
