#include <stdio.h>
#include <string.h>

int main()
{
    char students[7][20] = {{"Abraham"}, {"Benjamin"}, {"Charles"}, {"Devin"}, {"Edward"}};
    char newStudent[20];

    int pos, i;
    int numberStudents = 5;

    printf("Initial list of students:\n");
    for(int i = 0; i < numberStudents; i++) {
        printf("%s\n", students[i]);
    }


    printf("\nEnter the new student's name: ");
    fgets(newStudent, 20, stdin);

    for(pos = 0; pos < numberStudents; pos++)
    {
        if(strcmp(newStudent, students[i]) < 0)
        {
            break;
        }
    }

    for(i = numberStudents; i > pos; i--) {
        strcpy(students[i], students[i - 1]);
    }

    // Insert the new name at the correct position
    strcpy(students[pos], newStudent);
    numberStudents++;

    

    // Display the updated list of students
    printf("\nUpdated list of students after inserting '%s':\n", newStudent);
    for (int i = 0; i < numberStudents; i++) {
        printf("%s\n", students[i]);
    }

    return 0;
}