#include <stdio.h>

int venceu(char t[3][3], char simb) {
    // Linhas
    for(int i = 0; i < 3; i++) {
        if(t[i][0] == simb && t[i][1] == simb && t[i][2] == simb)
            return 1;
    }

    // Colunas
    for(int j = 0; j < 3; j++) {
        if(t[0][j] == simb && t[1][j] == simb && t[2][j] == simb)
            return 1;
    }

    // Diagonais
    if(t[0][0] == simb && t[1][1] == simb && t[2][2] == simb)
        return 1;

    if(t[0][2] == simb && t[1][1] == simb && t[2][0] == simb)
        return 1;

    return 0;
}

int main() {
    char tab[3][3];

    // Ler tabuleiro
    for(int i = 0; i < 3; i++) {
        scanf("%s", tab[i]);
    }

    int N;
    scanf("%d", &N);

    for(int k = 0; k < N; k++) {
        int x, y;
        char simb;
        scanf("%d %d %c", &x, &y, &simb);

        x--; // ajustar para índice 0
        y--;

        // Verifica se é inválida
        if(tab[x][y] != '.') {
            printf("Jogada inválida!\n");
            continue;
        }

        // Copiar tabuleiro
        char copia[3][3];
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                copia[i][j] = tab[i][j];
            }
        }

        // Fazer jogada
        copia[x][y] = simb;

        // Verificar vitória
        if(venceu(copia, simb)) {
            printf("Boa jogada, vai vencer!\n");
        } else {
            printf("Continua o jogo.\n");
        }
    }

    return 0;
}