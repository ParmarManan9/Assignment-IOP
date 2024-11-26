#include <stdio.h>
#include <string.h>  // For strcmp()

void sortStrings(char *arr[], int n);

int main() {
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Declare an array of pointers to store the strings
    char *arr[n];

    // Input the strings
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(100 * sizeof(char));  // Dynamically allocate memory for each string
        scanf(" %99[^\n]", arr[i]);  // Read a line (string) with spaces
    }

    // Sort the strings
    sortStrings(arr, n);

    // Print the sorted strings
    printf("\nSorted strings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);  // Free dynamically allocated memory
    }

    return 0;
}

// Function to sort strings in ascending order using pointers
void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Compare strings using strcmp and swap if needed
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
