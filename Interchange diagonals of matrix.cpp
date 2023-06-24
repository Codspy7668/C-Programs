#include <stdio.h>

#define N 4

int main() {
    int a[N][N], i, j, temp;

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = i+1; j < N; j++) {
            if (i != j && i+j != N-1) {
                continue;
            }
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("Interchanged matrix is:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

