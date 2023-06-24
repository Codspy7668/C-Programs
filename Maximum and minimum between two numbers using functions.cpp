#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int num1, num2, maximum, minimum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    maximum = max(num1, num2);
    minimum = min(num1, num2);
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    return 0;
}

