#include <stdio.h>
#define MAXLINE 100

strlen(s) char s[]; {
    int i;
    for (i = 0; (s[i] != '\0') && (i < MAXLINE); i++);
    return i;
}

main() {
    int secretNumber, guess, attempts;

    char s[MAXLINE];
    
    /* Generate a random secret number between 1 and 10*/
    secretNumber = (rand() % 10) + 1;
    
    attempts = 0;
    
    printf("Welcome to the guessing game! Try to guess the secret number between 1 and 10.\n");
    
    while (guess != secretNumber) {

        printf("Enter your guess: ");
        fgets(s, MAXLINE, stdin);
        
        if (sscanf(s, "%d", &guess) != 1) {
            printf("Invalid input. Please enter a number between 1 and 10.\n");
            continue;
        }
        
        attempts++;
        
        if (guess < 1 || guess > 10) {
            printf("Please enter a number between 1 and 10.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the secret number %d in %d attempt(s).\n", secretNumber, attempts);
            break;
        }
    }
}
