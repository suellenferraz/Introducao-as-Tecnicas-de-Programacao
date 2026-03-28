#include <stdio.h>

int main() {
    int N, contador = 0;
    double valor, soma = 0, media;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf", &valor);

        if (valor != -1) {
            soma += valor;
            contador++;
        }
    }

    if (contador == 0) {
        printf("A competicao nao possui dados historicos!\n");
    } else {
        media = soma / contador;
        printf("%.2lf\n", media);
    }

    return 0;
}