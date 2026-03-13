#include <stdio.h>

/** 
 * NF = Numero de Funcionário
 * H = Horas Trabalhadas
 * VH = Valor da Hora Trabalhada
 * S = Salário
 */

int main() {
    int NF, H;
    double VH, S;

    scanf("%d", &NF);
    scanf("%d", &H);
    scanf("%lf", &VH);

    S = H * VH;

    printf("NUMBER = %d\n", NF);
    printf("SALARY = U$ %.2lf\n", S);

    return 0;
}