#include <stdio.h>

int main() {
    int x;
    double Y, CM;

    scanf("%d", &x);
    scanf("%lf", &Y);

    CM = x / Y;
    printf("%.3lf km/l\n", CM);
    
    return 0;
}