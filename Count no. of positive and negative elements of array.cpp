#include <stdio.h>

int main() {
    int n, i, positive_count = 0, negative_count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }
    }

    printf("The number of positive elements in the array is: %d\n", positive_count);
    printf("The number of negative elements in the array is: %d\n", negative_count);

    return 0;
}

