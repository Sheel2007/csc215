#include <stdio.h>
#include "console_utils.h"

int main() {
    struct DOB {
        int month;  // Swap month and day
        int day;
        int year;
    };
    struct student {
        int roll_no;
        char name[100];
        float fees;
        struct DOB date;
    };
    struct student stud1;

    clrscr();
    printf("\nEnter the roll number: ");
    scanf("%d", &stud1.roll_no);
    printf("\nEnter the name: ");
    scanf("%s", stud1.name);
    printf("\nEnter the fees: ");
    scanf("%f", &stud1.fees);
    printf("\nEnter the DOB (month day year): ");
    scanf("%d %d %d", &stud1.date.month, &stud1.date.day, &stud1.date.year);

    printf("\n*******************STUDENT'S DETAILS********************");
    printf("\nROLL No. = %d", stud1.roll_no);
    printf("\nNAME = %s", stud1.name);
    printf("\nFEES = %f", stud1.fees);
    printf("\nDOB = %d - %d - %d\n", stud1.date.month, stud1.date.day, stud1.date.year);

    getch();
    return 0;
}
