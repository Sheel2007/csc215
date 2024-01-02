#include <stdio.h>
#include "console_utils.h"

int main() {
    char Dest_Str[100], Source_Str[50];
    int i = 0, j = 0;
    clrscr();
    printf("\n Enter the source string : ");
    fgets(Source_Str, 100, stdin);
    printf("\n Enter desination string : ");
    fgets(Dest_Str, 100, stdin);
    while (Dest_Str[i] != '\0')
        i++;
    while (Source_Str[j] != '\0') {
        Dest_Str[i] = Source_Str[j];
        i++;
        j++;
    }
    Dest_Str[i] = '\0';
    printf("\n After appending, the destination string is : ");
    puts(Dest_Str);
    getch();
    return 0;
}