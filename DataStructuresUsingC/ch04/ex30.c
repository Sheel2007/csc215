#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "console_utils.h"

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

void displayStudents(const char students[MAX_STUDENTS][MAX_NAME_LENGTH], int size);
void deleteStudent(char students[MAX_STUDENTS][MAX_NAME_LENGTH], int *size, const char *name);

int main() {
    char STUD[MAX_STUDENTS][MAX_NAME_LENGTH];
    int size, i;

    clrscr();
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Input student names
    for (i = 0; i < size; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", STUD[i]);
    }

    // Display the original list
    printf("\nOriginal list of students:\n");
    displayStudents(STUD, size);

    // Delete a student
    char nameToDelete[MAX_NAME_LENGTH];
    printf("\nEnter the name to delete: ");
    scanf("%s", nameToDelete);

    deleteStudent(STUD, &size, nameToDelete);

    // Display the updated list
    printf("\nUpdated list of students:\n");
    displayStudents(STUD, size);

    return 0;
}

void displayStudents(const char students[MAX_STUDENTS][MAX_NAME_LENGTH], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", students[i]);
    }
}

void deleteStudent(char students[MAX_STUDENTS][MAX_NAME_LENGTH], int *size, const char *name) {
    int i, j;
    for (i = 0; i < *size; i++) {
        if (strcmp(students[i], name) == 0) {
            // Found the name to delete, shift remaining names
            for (j = i; j < *size - 1; j++) {
                strcpy(students[j], students[j + 1]);
            }
            (*size)--;
            printf("\nStudent '%s' deleted.\n", name);
            return;  // Exit the function after deletion
        }
    }
    printf("\nStudent '%s' not found.\n", name);
}
