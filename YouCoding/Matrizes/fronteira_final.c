#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char mapa[N][M];

    int agua = 0, vegetacao = 0, deserto = 0, hostil = 0, solo = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf(" %c", &mapa[i][j]);

            if(mapa[i][j] == '~') agua++;
            else if(mapa[i][j] == '*') vegetacao++;
            else if(mapa[i][j] == '^') deserto++;
            else if(mapa[i][j] == 'X') hostil++;
            else if(mapa[i][j] == '.') solo++;
        }
    }

    int total = N * M;

    float pAgua = (agua * 100.0) / total;
    float pVeg = (vegetacao * 100.0) / total;
    float pDeserto = (deserto * 100.0) / total;

    // Ordem correta
    if(hostil > 0) {
        printf("Planeta Hostil\n");
    }
    else if(pAgua >= 50 && pVeg >= 20) {
        printf("Planeta Classe M\n");
    }
    else if(pAgua >= 85) {
        printf("Planeta Aquático\n");
    }
    else if(pDeserto >= 60) {
        printf("Planeta Desértico\n");
    }
    else if(pVeg >= 65) {
        printf("Planeta Selvagem\n");
    }
    else {
        printf("Planeta Inóspito\n");
    }

    return 0;
}