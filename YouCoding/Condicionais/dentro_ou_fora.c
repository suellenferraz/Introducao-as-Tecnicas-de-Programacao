#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int x, y;

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    scanf("%d", &x);
    scanf("%d", &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Dentro!\n");
    } else {
        printf("Fora!\n");
    }

    return 0;
}