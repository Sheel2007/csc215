#include <stdio.h>
#include "console_utils.h"

int main()
{
    char str[100], i = 0, length;
    clrscr();
    printf("\n Enter a string: ");
    fgets(str, 100, stdin);
    while (str[i] != '\0') i++;
    length = i;
    printf("\n The length of the string is: %d\n\n", length);
    getch();

    return 0;
}