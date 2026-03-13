#include <stdio.h>

/**
 * AT = Área do Triângulo
 * AC = Área do Círculo
 * ATP = Área do Trapézio
 * AQ = Área do Quadrado
 * AR = Área do Retângulo
 */

int main() {
    double AT, AC, ATP,AQ, AR;
    double A, B, C;
    double pi = 3.14159;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    AT = (A * C) / 2;
    AC = pi * C * C;
    ATP = ((A + B) * C) / 2;
    AQ = B * B;
    AR = A * B;

    printf("TRIANGULO: %.3lf\n", AT);
    printf("CIRCULO: %.3lf\n", AC);
    printf("TRAPEZIO: %.3lf\n", ATP);
    printf("QUADRADO: %.3lf\n", AQ);
    printf("RETANGULO: %.3lf\n", AR);
    
    return 0;
}