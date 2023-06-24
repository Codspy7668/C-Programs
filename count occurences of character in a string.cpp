#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find its occurences: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Occurrences of '%c' in '%s': %d", ch, str, count);

    return 0;
}

