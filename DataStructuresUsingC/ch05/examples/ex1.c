#include <stdio.h>
#include "console_utils.h"

int main() {
    struct student {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];
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
    scanf("%s", stud1.DOB);

    printf("\n*******************STUDENT'S DETAILS********************");
    printf("\nROLL No. = %d", stud1.roll_no);
    printf("\nNAME = %s", stud1.name);
    printf("\nFEES = %f", stud1.fees);
    printf("\nDOB = %s\n", stud1.DOB);

    getch();
    return 0;
}
