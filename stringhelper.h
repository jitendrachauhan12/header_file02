#ifndef STRINGHELPER_H
#define STRINGHELPER_H

// Converts a string to uppercase
void to_uppercase(char str[]);

// Converts a string to lowercase
void to_lowercase(char str[]);

// Counts the number of vowels in a string
int count_vowels(const char str[]);

// Reverses the entire string
void reverse_string(char str[]);

// Sorts an array of strings alphabetically
void sort_strings(char arr[][100], int n);

// Reverses the order of words in a string
void reverse_words(char str[]);

#endif