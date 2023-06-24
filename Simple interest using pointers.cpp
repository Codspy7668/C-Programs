#include <stdio.h>

int calculate_interest(int *p, int *r, int *t, int *si) {
    *si = (*p * *r * *t) / 100;
}

int main() {
    int principal, rate, time, simple_interest;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the time (in years): ");
    scanf("%d", &time);
    calculate_interest(&principal, &rate, &time, &simple_interest);
    printf("Simple Interest: %d\n", simple_interest);
    return 0;
}

