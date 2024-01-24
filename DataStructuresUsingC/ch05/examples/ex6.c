#include <stdio.h>
#include <string.h>
#include <ncurses.h>

struct student {
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

int main() {
    struct student stud1, *ptr_stud1;

    initscr(); // Initialize ncurses
    ptr_stud1 = &stud1;

    printw("\nEnter the details of the student :");
    printw("\nEnter the Roll Number = ");
    scanw("%d", &ptr_stud1->r_no);

    printw("\nEnter the Name = ");
    refresh();
    getnstr(ptr_stud1->name, 20);  // Corrected size

    printw("\nEnter the Course = ");
    refresh();
    getnstr(ptr_stud1->course, 20);  // Corrected size and data type

    printw("\nEnter the fees = ");
    scanw("%d", &ptr_stud1->fees);

    printw("\nDETAILS OF THE STUDENT");
    printw("\nROLL NUMBER = %d", ptr_stud1->r_no);
    printw("\nNAME = %s", ptr_stud1->name);
    printw("\nCOURSE = %s", ptr_stud1->course);
    printw("\nFEES = %d", ptr_stud1->fees);

    refresh();
    getch(); // Wait for user input
    endwin(); // End ncurses mode

    return 0;
}
