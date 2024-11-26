#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sumMatrix[3][3];

    // Input elements of the first 3x3 matrix
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second 3x3 matrix
    printf("\nEnter the elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the sum matrix
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
