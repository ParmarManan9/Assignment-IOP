#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float total_marks;
};

// Function to write student details into the file
void writeStudentDetails(FILE *file, struct Student *student);

int main() {
    FILE *file;
    int n, i;

    // Open the file in append mode (it will create the file if it doesn't exist)
    file = fopen("LNMIITSTUDENT.DAT", "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file\n");
        return 1;
    }

    // Input the number of students
    printf("Enter the number of students to append: ");
    scanf("%d", &n);

    // Declare a student structure
    struct Student student;

    // Input student details and append to the file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &student.roll_number);

        printf("Name: ");
        scanf(" %[^\n]", student.name);  // To read string with spaces

        printf("Total Marks: ");
        scanf("%f", &student.total_marks);

        // Write the student details to the file
        writeStudentDetails(file, &student);
    }

    printf("\nStudent details have been appended to LNMIITSTUDENT.DAT\n");

    // Close the file
    fclose(file);

    return 0;
}

// Function to write student details to the file
void writeStudentDetails(FILE *file, struct Student *student) {
    fprintf(file, "Roll Number: %d\n", student->roll_number);
    fprintf(file, "Name: %s\n", student->name);
    fprintf(file, "Total Marks: %.2f\n", student->total_marks);
    fprintf(file, "--------------------------\n");
}
