//  WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING ARRAY OF STRUCTURE INTO FUNCTION).
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

void readStudentInfo(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayHighScorers(struct Student students[], int size) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].marks > 500) {
            printf("\nName: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Marks: %.2f\n", students[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    int size = 10;

    readStudentInfo(students, size);
    displayHighScorers(students, size);

    return 0;
}
