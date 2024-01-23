#include <stdio.h>
#include "console_utils.h"

struct student {
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

int main() {
    struct student stud1, *ptr_stud1;
    clrscr();
    ptr_stud1 = &stud1;
    printf("\n Enter the details of the student :");
    printf("\n Enter the Roll Number = ");
    scanf("%d", &ptr_stud1->r_no);
    getchar(); // Consume the newline character
    printf("\n Enter the Name = ");
    fgets(ptr_stud1->name, 20, stdin);  // Corrected size
    printf("\n Enter the Course = ");
    fgets(ptr_stud1->course, 20, stdin);  // Corrected size and data type
    printf("\n Enter the fees = ");
    scanf("%d", &ptr_stud1->fees);
    printf("\n DETAILS OF THE STUDENT");
    printf("\n ROLL NUMBER = %d", ptr_stud1->r_no);
    printf("\n NAME = %s", ptr_stud1->name);
    printf("\n COURSE = %s", ptr_stud1->course);
    printf("\n FEES = %d", ptr_stud1->fees);
    return 0;
}
