#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    char *result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Enter a word to find: ");
    scanf("%s", word);

    result = strstr(str, word);
    if (result == NULL) {
        printf("'%s' not found in '%s'\n", word, str);
    } else {
        printf("First occurence of '%s' in '%s' is at position %ld\n", word, str, result - str + 1);
    }

    return 0;
}

