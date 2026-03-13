#include <stdio.h>

int main() {
    double a, r;
    double n = 3.14159;

    scanf("%lf", &r);
    a = n * r * r;
    
    printf("A=%.4f\n", a);
    return 0;
}