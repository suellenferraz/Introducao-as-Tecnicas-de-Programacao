#include <stdio.h>

int main() {
    int num, primeiro, ultimo, soma;

    scanf("%d", &num);
    ultimo = num % 10;

    int temp = num;

    while (temp >= 10) {
        temp = temp / 10;
    }

    primeiro = temp;

    soma = primeiro + ultimo;

    printf("O último numero é: %d\n", ultimo);
    printf("O primeiro número é: %d\n", primeiro);
    printf("A soma é: %d\n", soma);

    return 0;
}