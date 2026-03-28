#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Você entrou com %d, tente de novo na próxima\n", n);
        return 0;
    }

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%2d", num);

            if (j < i) {
                printf(" ");
            }

            num++;
        }
        printf("\n");
    }

    return 0;
}