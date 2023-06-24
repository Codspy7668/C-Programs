#include <stdio.h>
void upper(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = upper(str[i]);
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    upper(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}

