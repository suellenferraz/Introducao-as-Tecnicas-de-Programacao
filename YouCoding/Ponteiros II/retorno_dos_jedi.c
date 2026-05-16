#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** separa(char *str, int *quantidadeTextos) {
    char *copia = (char *)malloc((strlen(str) + 1) * sizeof(char));
    strcpy(copia, str);
    
    char **textoSeparado = (char **)malloc(100 * sizeof(char *));
    char *texto = strtok(copia, " ");
    int cont = 0;
    
    while (texto != NULL) {
        textoSeparado[cont] = (char *)malloc((strlen(texto) + 1) * sizeof(char));
        strcpy(textoSeparado[cont], texto);
        cont++;
        texto = strtok(NULL, " ");
    }
    
    free(copia);
    *quantidadeTextos = cont;
    return textoSeparado;
}

char* juntar(char **vetor_strings, int tamanho_vetor) {
    int tamanho_final = 0;
    
    for (int i = 0; i < tamanho_vetor; i++) {
        tamanho_final += strlen(vetor_strings[i]) + 1;
    }
    
    char *strings_unidas = (char *)malloc((tamanho_final + 1) * sizeof(char));
    strings_unidas[0] = '\0';
    
    for (int i = 0; i < tamanho_vetor; i++) {
        strcat(strings_unidas, vetor_strings[i]);
        if (i < tamanho_vetor - 1) {
            strcat(strings_unidas, " ");
        }
    }
    
    return strings_unidas;
}

char* embaralhar(char *mensagem) {
    int N;
    char **M = separa(mensagem, &N);
    
    char **E = (char **)malloc(N * 100 * sizeof(char *));
    int *usado = (int *)malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++) {
        usado[i] = 0;
    }
    
    srand(5940);
    int k = 0;
    int todos_usados = 0;
    
    while (!todos_usados) {
        int n = rand() % N;
        E[k] = M[n];
        k++;
        usado[n] = 1;
        
        todos_usados = 1;
        for (int i = 0; i < N; i++) {
            if (usado[i] == 0) {
                todos_usados = 0;
                break;
            }
        }
    }
    
    char *resultado = juntar(E, k);
    
    for (int i = 0; i < N; i++) {
        free(M[i]);
    }
    free(M);
    free(E);
    free(usado);
    
    return resultado;
}

int main() {
    char mensagem[501];
    fgets(mensagem, 501, stdin);
    
    if (mensagem[strlen(mensagem) - 1] == '\n') {
        mensagem[strlen(mensagem) - 1] = '\0';
    }
    
    char *resultado = embaralhar(mensagem);
    printf("%s\n", resultado);
    
    free(resultado);
    
    return 0;
}
