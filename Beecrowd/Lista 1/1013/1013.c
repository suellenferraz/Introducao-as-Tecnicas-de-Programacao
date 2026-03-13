#include <stdio.h>

int main() {
    int A, B, C, MAIOR_ABS, MAIOR;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    MAIOR_ABS = (A + B + abs(A - B)) / 2;
    MAIOR = (MAIOR_ABS + C + abs(MAIOR_ABS - C)) / 2;

    printf("%d eh o maior\n", MAIOR);

    return 0;
}