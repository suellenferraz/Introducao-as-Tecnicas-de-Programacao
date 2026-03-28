#include <stdio.h>

int main() {
    int n;
    char c;

    scanf("%d %c", &n, &c);

    int tamanho = n - 1;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {

            if (i == j || i + j == tamanho - 1) {
                printf("%c", c);
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}