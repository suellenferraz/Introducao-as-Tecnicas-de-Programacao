#include <stdio.h>

void ordenar(int *a, int *b) {
    int temp;
    
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;
    
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    
    ordenar(&valor1, &valor2);
    
    printf("%d\n", valor1);
    printf("%d\n", valor2);
    
    return 0;
}
