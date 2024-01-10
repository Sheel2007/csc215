#include <stdio.h>
#include <string.h>

int acc_strlen(char*);

char acc_low2up(char*);

char* acc_strcat(char*, const char*);

int acc_strcmp(const char*, const char*);

char* acc_strextr(const char*, int, int, int, int);

char* acc_strrev(char*);

int acc_strinsrt(char*, char*, char*, int);

char* acc_delsub(char*, const char*);

char* acc_strrplc(char*, const char*, const char*)

char* acc_shortstrs(char, int);

void acc_count(const char*, int*, int*, int*);

int is_palindrome(const char*);