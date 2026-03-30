#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int x) {
    int soma = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            soma += i;
        }
    }

    return (soma == x);
}

int main() {
    int N, x;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);

        if (ehPerfeito(x)) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}