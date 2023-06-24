#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], frequency[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        frequency[i] = -1;
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    printf("The frequency of all elements in the array are: \n");
    for (i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d occurs %d times\n", arr[i], frequency[i]);
        }
    }

    return 0;
}

