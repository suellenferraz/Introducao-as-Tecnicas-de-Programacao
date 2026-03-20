#include <stdio.h>

int main() {
    int a, b, c, d;
    int soma;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    soma = a + b + c + d;

    if (soma == 0) {
        printf("Ei! Ninguém colocou nada!\n");
    } else {
        char letra;
        letra = 'A' + ((soma - 1) % 26);
        printf("Letra: %c\n", letra);
    }

    return 0;
}