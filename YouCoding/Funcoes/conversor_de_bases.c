#include <stdio.h>

int converteBase(int value, int base) {
    int resultado = 0;
    int multiplicador = 1;

    if (value == 0) {
        return 0;
    }

    while (value > 0) {
        resultado += (value % base) * multiplicador;
        multiplicador *= 10;
        value /= base;
    }

    return resultado;
}

int main() {
    int value, base, resultado;

    while (1) {
        scanf("%d", &value);

        if (value == -1) {
            printf("Programa Encerrado!\n");
            break;
        }

        scanf("%d", &base);

        resultado = converteBase(value, base);

        printf("Numero %d(10) na base %d = %d(%d)\n", value, base, resultado, base);
    }

    return 0;
}