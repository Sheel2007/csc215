#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "console_utils.h"

struct student {
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

void display (struct student *);
int main() {
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    printf("\n Enter the data for the student ");
    printf("\n ROLL NO.: ");
    scanf("%d", &ptr->r_no);
    getchar();
    printf("\n NAME: ");
    fgets(ptr->name, 100, stdin);
    printf("\n COURSE: ");
    fgets(ptr->course, 100, stdin);
    printf("\n FEES: ");
    scanf("%d", &ptr->fees);
    display(ptr);
    getch();
    return 0;
}
void display(struct student *ptr) {
    printf("\n DETAILS OF STUDENT");
        printf("\n ROLL No. = %d", ptr->r_no);
        printf("\n NAME = %s", ptr->name);
        printf("\n COURSE = %s", ptr->course);
        printf("\n FEES = %d", ptr->fees);
}