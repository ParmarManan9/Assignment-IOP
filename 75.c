#include <stdio.h>

struct Student {
    int rollNo;
    int subject1;
    int subject2;
    int subject3;
    int total;
};

void inputResults(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks in Subject 1: ");
        scanf("%d", &students[i].subject1);
        printf("Marks in Subject 2: ");
        scanf("%d", &students[i].subject2);
        printf("Marks in Subject 3: ");
        scanf("%d", &students[i].subject3);
        students[i].total = students[i].subject1 + students[i].subject2 + students[i].subject3;
    }
}

void displayResults(struct Student students[], int size) {
    printf("\nRoll No\tSubject1\tSubject2\tSubject3\tTotal\n");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", 
                students[i].rollNo, 
                students[i].subject1, 
                students[i].subject2, 
                students[i].subject3, 
                students[i].total);
    }
}

void findHighestMarks(struct Student students[], int size) {
    int highestSub1 = students[0].subject1, rollNoSub1 = students[0].rollNo;
    int highestSub2 = students[0].subject2, rollNoSub2 = students[0].rollNo;
    int highestSub3 = students[0].subject3, rollNoSub3 = students[0].rollNo;
    int highestTotal = students[0].total, rollNoHighestTotal = students[0].rollNo;

    for (int i = 1; i < size; i++) {
        // Highest in Subject 1
        if (students[i].subject1 > highestSub1) {
            highestSub1 = students[i].subject1;
            rollNoSub1 = students[i].rollNo;
        }

        // Highest in Subject 2
        if (students[i].subject2 > highestSub2) {
            highestSub2 = students[i].subject2;
            rollNoSub2 = students[i].rollNo;
        }

        // Highest in Subject 3
        if (students[i].subject3 > highestSub3) {
            highestSub3 = students[i].subject3;
            rollNoSub3 = students[i].rollNo;
        }

        // Highest total marks
        if (students[i].total > highestTotal) {
            highestTotal = students[i].total;
            rollNoHighestTotal = students[i].rollNo;
        }
    }

    printf("\nHighest Marks in Each Subject:\n");
    printf("Subject 1: %d (Roll No: %d)\n", highestSub1, rollNoSub1);
    printf("Subject 2: %d (Roll No: %d)\n", highestSub2, rollNoSub2);
    printf("Subject 3: %d (Roll No: %d)\n", highestSub3, rollNoSub3);

    printf("\nStudent with Highest Total Marks:\n");
    printf("Roll No: %d, Total Marks: %d\n", rollNoHighestTotal, highestTotal);
}

int main() {
    struct Student students[10];
    int size = 10;

    inputResults(students, size);
    displayResults(students, size);
    findHighestMarks(students, size);

    return 0;
}
