#include <stdio.h>

int is_even(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_even(num)) {
        printf("The number is even.\n");
    }
    else {
        printf("The number is odd.\n");
    }
    return 0;
}

