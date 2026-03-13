#include <stdio.h>

/** 
 * N = nome do vendedor
 * S = salário fixo
 * V = total de vendas efetuadas
 * P = percentual de comissão (15%)
 * T = salário total
 */

int main() {
    char N[20];
    double S, V, P, T;

    scanf("%s", N);
    scanf("%lf", &S);
    scanf("%lf", &V);

    P = 0.15;
    T = S + (V * P);

    printf("TOTAL = R$ %.2lf\n", T);

    return 0;
}