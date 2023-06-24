#include <stdio.h>
#include <string.h>

void reverse_words(char *str) {
    
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    
    
    int start = 0, end = 0;
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            int j;
            for (j = start; j < (start + end)/2; j++) {
                char temp = str[j];
                str[j] = str[end - (j - start)];
                str[end - (j - start)] = temp;
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    reverse_words(str);
    printf("The reversed string is: %s\n", str);
    return 0;
}
