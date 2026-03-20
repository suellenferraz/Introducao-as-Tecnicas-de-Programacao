#include <stdio.h>

int main() {
    int C, C1, C2;

    scanf("%d", &C);
    scanf("%d", &C1);
    scanf("%d", &C2);

    if (C1 < C && C2 > C) {
        if ((C - C1) < (C2 - C)) {
            printf("A\n");
        } else if ((C - C1) > (C2 - C)) {
            printf("F\n");
        } else {
            printf("C\n");
        }
    }
    else if (C2 < C && C1 > C) {
        if ((C - C2) < (C1 - C)) {
            printf("A\n");
        } else if ((C - C2) > (C1 - C)) {
            printf("F\n");
        } else {
            printf("C\n");
        }
    }
    else {
        printf("C\n");
    }

    return 0;
}