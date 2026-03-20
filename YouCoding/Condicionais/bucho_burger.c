#include <stdio.h>

int main() {
    int codigo, pago, preco;

    scanf("%d", &codigo);
    scanf("%d", &pago);

    if (codigo == 1) {
        preco = 12;
    } else if (codigo == 2) {
        preco = 23;
    } else if (codigo == 3) {
        preco = 31;
    } else if (codigo == 4) {
        preco = 28;
    } else if (codigo == 5) {
        preco = 15;
    }

    if (pago > preco) {
        printf("Troco = %d reais\n", pago - preco);
    } else if (pago == preco) {
        printf("Deu certim!\n");
    } else {
        printf("Saldo insuficiente! Falta %d reais\n", preco - pago);
    }

    return 0;
}