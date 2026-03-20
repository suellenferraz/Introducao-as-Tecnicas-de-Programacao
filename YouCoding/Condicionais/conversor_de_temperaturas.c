#include <stdio.h>

int main() {
    double temp, C, F, K;
    char escala;

    scanf("%lf %c", &temp, &escala);

    if (escala == 'C') {
        C = temp;
        F = C * 1.8 + 32;
        K = C + 273.15;
    }
    else if (escala == 'F') {
        F = temp;
        C = (F - 32) / 1.8;
        K = C + 273.15;
    }
    else if (escala == 'K') {
        K = temp;
        C = K - 273.15;
        F = C * 1.8 + 32;
    }

    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);

    return 0;
}