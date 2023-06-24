#include <stdio.h>

int main() {
    int n, i, first, second, third;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = third = INT_MIN; // initialize all variables to the minimum possible value

    // Find the largest three elements
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second);
    printf("The second smallest element in the array is: %d\n", third);

    return 0;
}

