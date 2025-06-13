#include <stdio.h>

#define MAX_STUDENTS 50

int main() {
    char names[MAX_STUDENTS][50];
    int totalMarks[MAX_STUDENTS];
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student names and marks
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf(" %[^\n]", names[i]); // Read the name including spaces
        printf("Enter the total marks of student %d: ", i + 1);
        scanf("%d", &totalMarks[i]);
    }

    // Display the entered student data
    printf("\nEntered student data:\n");
    printf("No\tStudent Name\tTotal Marks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\n", i + 1, names[i], totalMarks[i]);
    }

    return 0;
}