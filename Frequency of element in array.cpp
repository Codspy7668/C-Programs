#include <stdio.h>

int main() {
    int n, i, j, x, frequency;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element whose frequency you want to find: ");
    scanf("%d", &x);
    frequency = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            frequency++;
        }
    }
    printf("The frequency of %d in the array is: %d\n", x, frequency);
    return 0;
}

