#include <stdio.h>

int main() {
    int qtd;
    double preco;
    
    int total_qtd = 0;
    double total_valor = 0;

    scanf("%d", &qtd);

    while (qtd != -1) {
        scanf("%lf", &preco);

        total_qtd += qtd;
        total_valor += qtd * preco;

        scanf("%d", &qtd);
    }

    printf("%d %.2lf\n", total_qtd, total_valor);

    return 0;
}