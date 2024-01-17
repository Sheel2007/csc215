#include <stdio.h> 
#include <string.h>

int main()
{
    char str[100];
    printf ("\n Enter the string: "); 
    fgets(str, 100, stdin); 

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ';'){
            str[i] = str[i + 1];
            } // Move back to recheck the current position
        }

    // Period to commas
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == '.') {
            str[i] = ',';
        }
    }
}