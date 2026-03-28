#include <stdio.h>

int main() {
    int A[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%d", A[i]);

        if (i != 0) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}