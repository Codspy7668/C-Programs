#include <stdio.h>

int is_perfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

void print_perfect(int start, int end) {
    int i;
    printf("Perfect numbers between %d and %d: ", start, end);
    for (i = start; i <= end; i++) {
        if (is_perfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the interval: ");
    scanf("%d %d", &start, &end);
    print_perfect(start, end);
    return 0;
}

