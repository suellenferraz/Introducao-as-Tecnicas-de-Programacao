#include <stdio.h>
#include <stdlib.h>

double* valores_distintos(double *valores, int n, int *tamanho_novo) {
    double *distintos = (double*)malloc(n * sizeof(double));
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int repeticoes = 0;
        // Contar quantas vezes o valor aparece no vetor
        for (int j = 0; j < n; j++) {
            if (valores[i] == valores[j]) {
                repeticoes++;
            }
        }
        // Se o valor aparecer apenas uma vez
        if (repeticoes == 1) {
            int ja_adicionado = 0;
            for (int j = 0; j < count; j++) {
                if (distintos[j] == valores[i]) {
                    ja_adicionado = 1;
                    break;
                }
            }
            if (!ja_adicionado) {
                distintos[count] = valores[i];
                count++;
            }
        }
    }
    
    *tamanho_novo = count;
    return distintos;
}

int main() {
    int n;
    scanf("%d", &n);
    
    double *valores = (double*)malloc(n * sizeof(double));
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &valores[i]);
    }
    
    int tamanho_novo;
    double *distintos = valores_distintos(valores, n, &tamanho_novo);
    
    printf("[");
    for (int i = 0; i < tamanho_novo; i++) {
        if (i > 0) printf(", ");
        printf("%.4f", distintos[i]);
    }
    printf("]\n");
    
    free(valores);
    free(distintos);
    
    return 0;
}
