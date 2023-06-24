#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, frequency[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; i < strlen(str); i++) {
        frequency[(int)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' appeared %d times\n", (char)i, frequency[i]);
        }
    }

    return 0;
}

