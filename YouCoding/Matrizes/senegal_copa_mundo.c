#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor) {
    
    int inicio = bandeira[0][0] - 1; // recupera o valor inicial

    int valor;

    if(cor == 'G') valor = inicio + 1;
    else if(cor == 'Y') valor = inicio + 2;
    else valor = inicio + 3;

    int qtd = altura * (largura / 3);

    return valor * qtd;
}

int main() {
    int largura, inicio;
    char cor;

    scanf("%d %d %c", &largura, &inicio, &cor);

    int altura = (2 * largura) / 3;

    int bandeira[altura][largura];

    // Preencher a bandeira
    for(int i = 0; i < altura; i++) {
        for(int j = 0; j < largura; j++) {
            
            if(j < largura/3) {
                bandeira[i][j] = inicio + 1; // Verde
            }
            else if(j < 2*(largura/3)) {
                bandeira[i][j] = inicio + 2; // Amarelo
            }
            else {
                bandeira[i][j] = inicio + 3; // Vermelho
            }
        }
    }

    int resultado = calcular_aposta(largura, altura, bandeira, cor);

    printf("%d\n", resultado);

    return 0;
}