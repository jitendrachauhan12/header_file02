#include <stdio.h>
#include "stringhelper.h"

int main() {
    char str[100] = "Hello from OpenAI";
    char arr[4][100] = {"Zebra", "Apple", "Mango", "Banana"};

    to_uppercase(str);
    printf("Uppercase: %s\n", str);

    to_lowercase(str);
    printf("Lowercase: %s\n", str);

    printf("Vowel count: %d\n", count_vowels(str));

    reverse_string(str);
    printf("Reversed string: %s\n", str);

    sort_strings(arr, 4);
    printf("Sorted strings:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\n", arr[i]);
    }

    char sentence[100] = "this is a test";
    reverse_words(sentence);
    printf("Reversed words: %s\n", sentence);

    return 0;
}
