#include <stdio.h>
#define MAXLINE 100

strlen(s) char s[]; {
    int i;
    for (i = 0; (s[i] != '\0') && (i < MAXLINE); i++)
        ;
    return i;
}

main() {
    int num;
    char s[MAXLINE];
    
    printf("Enter an integer: ");
    fgets(s, MAXLINE, stdin);
    
    /* Convert the input to an integer*/
    if (sscanf(s, "%d", &num) == 1) {
        num += 5; /* Add 5 to the integer*/
        printf("Result: %d\n", num);
    } else {
        printf("Invalid input. Please enter a valid integer.\n");
    }
}
