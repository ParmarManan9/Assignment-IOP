#include <stdio.h>

// Declare a structure to hold employee details
struct Employee {
    int empNumber;       // Employee Number
    char empName[50];    // Employee Name
    float basicPay;      // Basic Pay
};

int main() {
    struct Employee employ[50];  // Array of structures to store 50 employees
    struct Employee *ptr;        // Pointer to Employee structure
    int n;                       // Number of employees

    // Get the number of employees to input
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Sorry, we can only store information for up to 50 employees.\n");
        return 1;
    }

    // Loop to input employee details
    for (int i = 0; i < n; i++) {
        ptr = &employ[i];  // Point to the current employee in the array

        // Read employee details
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &ptr->empNumber);
        printf("Employee Name: ");
        getchar();  // To consume the newline left by previous scanf
        fgets(ptr->empName, sizeof(ptr->empName), stdin);  // Read name with spaces
        printf("Basic Pay: ");
        scanf("%f", &ptr->basicPay);
    }

    // Print the list of employees and their basic pay
    printf("\nEmployee List:\n");
    printf("Employee Number\tEmployee Name\t\tBasic Pay\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        ptr = &employ[i];  // Point to the current employee
        printf("%d\t\t%s\t\t%.2f\n", ptr->empNumber, ptr->empName, ptr->basicPay);
    }

    return 0;
}
