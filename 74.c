// Given are one dimensional arrays A and B which are sorted in ascending order. Write a program to merge them into a single sorted array C that contains every item form array A and B, in ascending order.
#include <stdio.h>

void mergeArrays(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays until one of them is exhausted
    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Add remaining elements of A (if any)
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // Add remaining elements of B (if any)
    while (j < sizeB) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8, 10};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int sizeC = sizeA + sizeB;
    int C[sizeC];

    mergeArrays(A, sizeA, B, sizeB, C);

    // Display the merged array
    printf("Merged array C in ascending order:\n");
    for (int i = 0; i < sizeC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
