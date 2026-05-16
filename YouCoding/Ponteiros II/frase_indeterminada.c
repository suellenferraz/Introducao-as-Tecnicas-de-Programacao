#include <stdio.h>
#include <stdlib.h>

int tamanho(int n, char str[]) {
    int count = 0;
    while (count < n && str[count] != '\0') {
        count = count + 1;
    }
    return count;
}

void exibir(char frase[]) {
    int value = (frase[0] - '0') * 100 + (frase[1] - '0') * 10 + (frase[2] - '0');
    int tam = tamanho(value, frase);
    if (value >= 0 && tam == value && frase[value] == '\0') {
        printf("%d == %d OK!\n", tam, value);
    } else {
        printf("Resultado inesperado! Um \\n talvez?\n");
    }
}

int main() {
    char tamanho_str[4];
    scanf("%3s", tamanho_str);
    
    int valor_tamanho = (tamanho_str[0] - '0') * 100 + (tamanho_str[1] - '0') * 10 + (tamanho_str[2] - '0');
    
    char *frase = (char *)malloc((valor_tamanho + 1) * sizeof(char));
    
    frase[0] = tamanho_str[0];
    frase[1] = tamanho_str[1];
    frase[2] = tamanho_str[2];
    
    int i;
    for (i = 3; i < valor_tamanho; i++) {
        scanf("%c", &frase[i]);
    }
    frase[i] = '\0';
    
    exibir(frase);
    
    free(frase);
    
    return 0;
}
