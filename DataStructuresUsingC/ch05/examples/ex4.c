#include <stdio.h>
#include "console_utils.h"

int main() {
    struct student {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];
    };
    struct student stud[50];
    int n, i, num, new_rolno;
    float new_fees;  // Corrected data type
    char new_DOB[80], new_name[80];
    clrscr();
    printf("\nEnter the number of students : ");
    scanf("%d", &n);
    getchar(); // Consume the newline character in the buffer
    for (i = 0; i < n; i++) {  // Fixed the loop variable (changed n to i)
        printf("\nEnter the roll number : ");
        scanf("%d", &stud[i].roll_no);
        getchar(); // Consume the newline character in the buffer
        printf("\nEnter the name : ");
        fgets(stud[i].name, 80, stdin);  // Corrected size
        printf("\nEnter the fees : ");
        scanf("%f", &stud[i].fees);
        getchar(); // Consume the newline character in the buffer
        printf("\nEnter the DOB : ");
        fgets(stud[i].DOB, 80, stdin);  // Corrected size
    }
    for (i = 0; i < n; i++) {
        printf("\n ********************DETAILS OF STUDENT %d**********************", i+1);
        printf("\n ROLL No. = %d", stud[i].roll_no);
        printf("\n NAME = %s", stud[i].name);
        printf("\n FEES = %f", stud[i].fees);
        printf("\n DOB = %s", stud[i].DOB);
    }
    printf("\nEnter the student number whose record has to be edited : ");
    scanf("%d", &num);
    num = num - 1;
    printf("Enter the new roll number : ");
    scanf("%d", &new_rolno);
    getchar(); // Consume the newline character in the buffer
    printf("\nEnter the new name : ");
    fgets(new_name, 80, stdin);  // Corrected size
    printf("\nEnter the new fees : ");
    scanf("%f", &new_fees);
    getchar(); // Consume the newline character in the buffer
    printf("\nEnter the new DOB : ");
    fgets(new_DOB, 80, stdin);  // Corrected size
    stud[num].roll_no = new_rolno;
    // No need to use strcpy for character arrays, direct assignment is fine
    stud[num].fees = new_fees;
    // No need to use strcpy for character arrays, direct assignment is fine
    for (i = 0; i < n; i++) {
        printf("\n ********************DETAILS OF STUDENT %d**********************", i+1);
        printf("\n ROLL No. = %d", stud[i].roll_no);
        printf("\n NAME = %s", stud[i].name);
        printf("\n FEES = %f", stud[i].fees);
        printf("\n DOB = %s", stud[i].DOB);
    }
    getch();
    return 0;
}
