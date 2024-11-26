#include <stdio.h>

int main() {
    int n, target, count = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to count occurrences
    printf("Enter the element to find its occurrences: ");
    scanf("%d", &target);

    // Count occurrences of the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // Output the result
    printf("Element %d occurs %d times in the array.\n", target, count);

    return 0;
}
