#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stringhelper.h"

void to_uppercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

void to_lowercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int count_vowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

void reverse_string(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

void sort_strings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

void reverse_words(char str[]) {
    char words[100][100], result[1000] = "";
    int i = 0, j = 0, k = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words[j][k] = '\0';
            j++;
            k = 0;
        } else {
            words[j][k++] = str[i];
        }
    }
    words[j][k] = '\0';
    int word_count = j;

    for (int l = word_count; l >= 0; l--) {
        strcat(result, words[l]);
        if (l != 0)
            strcat(result, " ");
    }
    strcpy(str, result);
}
