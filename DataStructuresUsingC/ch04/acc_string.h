#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "console_utils.h"

int acc_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;

}

char acc_low2up (char *str) {
    char str[100], upper_str[100];
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
        i++;
    }
    upper_str[i] = '\0';
    return upper_str;
}

char* acc_strcat(char *Dest_Str, const char *Source_Str) {
    int i = 0, j = 0;

    while (Dest_Str[i] != '\0')
        i++;
    while (Source_Str[j] != '\0') {
        Dest_Str[i] = Source_Str[j];
        i++;
        j++;
    }
    Dest_Str[i] = '\0';
    return Dest_Str;
}

int acc_strcmp(const char *str1, const char *str2) {
    int i = 0, len1 = strlen(str1), len2 = strlen(str2);

    while (i < len1 && i < len2) {
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                return 1; // str1 is greater than str2
            } else {
                return -1; // str2 is greater than str1
            }
        }
        i++;
    }

    if (len1 == len2) {
        return 0; // Both strings are equal
    } else if (len1 > len2) {
        return 1; // str1 is greater than str2
    } else {
        return -1; // str2 is greater than str1
    }
}

char* acc_strextr(const char *str, int i, int j, int m, int n) {
    char substr[100];
    i = m;
    while (str[i] != '\0' && n > 0) {
        substr[j] = str[i];
        i++;
        j++;
        n--;
    }
    substr[j] = '\0';
    return substr;
}

char* acc_strrev(char *str) {
    char temp;
    int i = 0, j = 0;
    j = strlen(str) - 1;
    while (i < j) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    return str;
}