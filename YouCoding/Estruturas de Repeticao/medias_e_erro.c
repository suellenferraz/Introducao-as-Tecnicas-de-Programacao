#include <stdio.h>
#include <math.h>

int main() {
    double x, soma = 0, soma_inv = 0, produto = 1;
    double MA, MH, MG;
    double erro_h, erro_g, erro_medio;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &x);

        soma += x;
        soma_inv += 1.0 / x;
        produto *= x;
    }

    MA = soma / 10.0;
    MH = 10.0 / soma_inv;
    MG = pow(produto, 1.0 / 10.0);

    erro_h = (MH - MA) / MA;
    erro_g = (MG - MA) / MA;
    erro_medio = (erro_h + erro_g) / 2.0;

    printf("Média aritmética é %.2lf\n", MA);
    printf("Média harmônica é %.2lf\n", MH);
    printf("Média geométrica é %.2lf\n", MG);
    printf("Erro médio é %.2lf %%\n", erro_medio * 100);

    return 0;
}