#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

// Function to multiply two matrices
void multiplyMatrices(int *A, int *B, int *C, int rowA, int colA, int rowB, int colB);

int main() {
    int rowA, colA, rowB, colB;

    // Input the dimensions of the first matrix
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowA, &colA);

    // Input the dimensions of the second matrix
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowB, &colB);

    // Check if multiplication is possible
    if (colA != rowB) {
        printf("Matrix multiplication is not possible. The number of columns of A must equal the number of rows of B.\n");
        return 1;
    }

    // Dynamically allocate memory for matrices
    int *A = (int *)malloc(rowA * colA * sizeof(int));
    int *B = (int *)malloc(rowB * colB * sizeof(int));
    int *C = (int *)malloc(rowA * colB * sizeof(int));  // Result matrix

    // Input elements for matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", (A + i * colA + j));  // Accessing using pointer arithmetic
        }
    }

    // Input elements for matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            scanf("%d", (B + i * colB + j));  // Accessing using pointer arithmetic
        }
    }

    // Multiply matrices A and B, result stored in C
    multiplyMatrices(A, B, C, rowA, colA, rowB, colB);

    // Output the result matrix C
    printf("Product of matrix A and matrix B is:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", *(C + i * colB + j));  // Accessing result using pointer arithmetic
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    free(A);
    free(B);
    free(C);

    return 0;
}

// Function to multiply matrices A and B
void multiplyMatrices(int *A, int *B, int *C, int rowA, int colA, int rowB, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            *(C + i * colB + j) = 0;  // Initialize the element to 0
            for (int k = 0; k < colA; k++) {
                *(C + i * colB + j) += (*(A + i * colA + k)) * (*(B + k * colB + j));
            }
        }
    }
}
