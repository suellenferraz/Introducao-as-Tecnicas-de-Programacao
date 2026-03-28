#include <stdio.h>

int main() {
    int num, original, invertido = 0, resto;

    scanf("%d", &num);
    original = num;

    while (num != 0) {
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num = num / 10;
    }

    if (invertido == original) {
        if (original % 2 == 0) {
            printf("%d é Palíndromo e par.\n", original);
        } else {
            printf("%d é Palíndromo e impar.\n", original);
        }
    } else {
        printf("%d não é Palíndromo e par.\n", original);
    }

    return 0;
}