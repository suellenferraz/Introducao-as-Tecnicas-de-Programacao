#include <stdio.h>

int main() {
    double tempoMax, tempo;
    int aptos = 0, series;

    scanf("%lf", &tempoMax);
    scanf("%lf", &tempo);

    while (tempo != -1) {
        if (tempo <= tempoMax) {
            aptos++;
        }
        scanf("%lf", &tempo);
    }

    if (aptos == 0) {
        series = 0;
    } else if (aptos % 8 == 0) {
        series = aptos / 8;
    } else {
        series = (aptos / 8) + 1;
    }

    printf("%d %d\n", aptos, series);

    return 0;
}