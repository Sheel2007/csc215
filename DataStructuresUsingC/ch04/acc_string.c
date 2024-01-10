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

// Return string made from inserting ins_str in text at position pos. 
int acc_strinsrt(char* text, char* ins_str, char* merge_str, int pos) {
    int i = 0, j = 0, k = 0;

    while (text[i] != '\0') {
        if (i == pos) {
            while (ins_str[k] != '\0') {
                merge_str[j++] = ins_str[k++];
            }
        }
        merge_str[j++] = text[i++];
    }
    merge_str[j] = '\0';

    return 0; 
}

char* acc_delsub(char* text, const char*str) {
    char* new_str = (char*)malloc(200 * sizeof(char));
    if (new_str == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    
    int i = 0, j = 0, found = 0, k, n = 0, copy_loop = 0;

    while (text[i] != '\0') {
        j = 0, found = 0, k = i;
        while (text[k] == str[j] && str[j] != '\0') {
            k++;
            j++;
        }
        if (str[j] == '\0')
            copy_loop = k;
        new_str[n] = text[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_str[n] = '\0';

    return new_str;
}

char* acc_strrplc(char* str, const char* pat, const char* rep_pat) {
    char* new_str = (char*)malloc(200 * sizeof(char));
    if (new_str == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    int i = 0, j = 0, k, n = 0, copy_loop = 0, rep_index = 0;
    while (str[i] != '\0') {
        j = 0, k = i;
        while (str[k] == pat[j] && pat[j] != '\0') {
            k++;
            j++;
        }
        if (pat[j] == '\0') {
            copy_loop = k;
            while (rep_pat[rep_index] != '\0') {
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_str[n] = '\0';
    return new_str;
}

char (*acc_shortstrs(char names[][10], int n))[10] {
    char temp[10];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    char (*sorted_names)[10] = (char (*)[10])malloc(n * sizeof(names[0]));

    if (sorted_names == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < n; i++) {
        strcpy(sorted_names[i], names[i]);
    }

    return sorted_names;
}

void acc_count(const char *text, int *word_count, int *line_count, int *char_count) {
    int i = 0;

    printf("\n This is stuff %s", text);

    while (text[i] != '\0') {
        (*char_count)++;

        if (text[i] == '\n' || i == 79)
            (*line_count)++;

        if (text[i] == ' ' && text[i + 1] != ' ')
            (*word_count)++;

        i++;
    }
}

int is_palindrome(const char *str) {
    int i = 0, j, length = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        length++;
        i++;
    }

    i = 0;
    j = length - 1;

    while (i < length / 2) {
        if (str[i] == str[j]) {
            i++;
            j--;
        } else {
            return 0;  // Not a palindrome
        }
    }

    return 1;  // Palindrome
}
