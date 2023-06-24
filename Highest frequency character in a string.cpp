#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, frequency[26] = {0};
    char max_char;
    int max_frequency = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z')
		 {
            frequency[str[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (frequency[i] > max_frequency) {
            max_frequency = frequency[i];
            max_char = i + 'a';
        }
    }

    printf("Character '%c' has the highest frequency of %d", max_char, max_frequency);

    return 0;
}

