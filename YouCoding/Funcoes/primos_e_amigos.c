#include <stdio.h>

// verifica se eh primo
int ehPrimo(int n) {
    if (n <= 1) return 0;

    int cont = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }

    return (cont == 2);
}

// soma dos divisores (sem o proprio numero)
int somaDivisores(int n) {
    int soma = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int atual, anterior;
    int primeiro = 1;

    while (1) {
        scanf("%d", &atual);

        if (atual == 0) break;

        // verifica primo
        if (ehPrimo(atual)) {
            printf("O numero %d e primo!", atual);
        } else {
            printf("O numero %d nao e primo!", atual);
        }

        // compara com o anterior
        if (!primeiro) {
            int soma1 = somaDivisores(anterior);
            int soma2 = somaDivisores(atual);

            if (soma1 == atual && soma2 == anterior) {
                printf(" Os numeros <%d,%d> sao amigos!", anterior, atual);
            } else {
                printf(" Os numeros <%d,%d> nao sao amigos!", anterior, atual);
            }
        }

        printf("\n");

        anterior = atual;
        primeiro = 0;
    }

    return 0;
}