#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int_range(int min, int max) {
    int range = max - min + 1;
    return min + rand() % range;
}

int *criarVetorAleatorio(int tamanho, int minimo, int maximo) {
    int *valores = (int *)malloc((tamanho + 3) * sizeof(int));
    
    valores[0] = tamanho;
    valores[1] = minimo;
    valores[2] = maximo;
    
    for (int i = 0; i < tamanho; i++) {
        valores[i + 3] = rand_int_range(minimo, maximo);
    }
    
    return valores;
}

int *criarHistograma(int *valores) {
    int tamanho = valores[0];
    int minimo = valores[1];
    int maximo = valores[2];
    
    int range = maximo - minimo + 1;
    int *histograma = (int *)malloc((range + 2) * sizeof(int));
    
    histograma[0] = minimo;
    histograma[1] = maximo;
    
    for (int i = 0; i < range; i++) {
        histograma[i + 2] = 0;
    }
    
    for (int i = 3; i < tamanho + 3; i++) {
        int valor = valores[i];
        histograma[valor - minimo + 2]++;
    }
    
    return histograma;
}

float *criarPorcentagens(int *histograma) {
    int minimo = histograma[0];
    int maximo = histograma[1];
    int range = maximo - minimo + 1;
    
    float *porcentagens = (float *)malloc(range * sizeof(float));
    
    int total = 0;
    for (int i = 0; i < range; i++) {
        total += histograma[i + 2];
    }
    
    for (int i = 0; i < range; i++) {
        porcentagens[i] = (histograma[i + 2] * 100.0) / total;
    }
    
    return porcentagens;
}

void imprimePorcentagens(float *porcentagens, int *histograma) {
    int minimo = histograma[0];
    int maximo = histograma[1];
    
    printf("Valor |Qtdade |Porcent\n");
    
    for (int i = minimo; i <= maximo; i++) {
        int qtdade = histograma[i - minimo + 2];
        printf("%d |%d |%.2f%%\n", i, qtdade, porcentagens[i - minimo]);
    }
}

void liberar(int *valores, float *porcentagens, int *histograma) {
    free(valores);
    free(porcentagens);
    free(histograma);
}

int main() {
    int tamanho, minimo, maximo;
    scanf("%d", &tamanho);
    scanf("%d %d", &minimo, &maximo);
    
    int *valores = criarVetorAleatorio(tamanho, minimo, maximo);
    int *histograma = criarHistograma(valores);
    float *porcentagens = criarPorcentagens(histograma);
    
    imprimePorcentagens(porcentagens, histograma);
    
    liberar(valores, porcentagens, histograma);
    
    return 0;
}
