#include <stdio.h>

typedef struct {
    float x1, y1;
    float x2, y2;
} Retangulo;

int contem(Retangulo a, Retangulo b) {
    return (a.x1 <= b.x1 &&
            a.y1 <= b.y1 &&
            a.x2 >= b.x2 &&
            a.y2 >= b.y2);
}

int ehFim(Retangulo r) {
    return (r.x1 == 0 && r.y1 == 0 && r.x2 == 0 && r.y2 == 0);
}

void imprime(Retangulo r) {
    printf("(<%.2f,%.2f>,<%.2f,%.2f>)", r.x1, r.y1, r.x2, r.y2);
}

int main() {
    Retangulo tela, r;

    scanf("%f %f %f %f", &tela.x1, &tela.y1, &tela.x2, &tela.y2);

    while (1) {
        scanf("%f %f %f %f", &r.x1, &r.y1, &r.x2, &r.y2);

        if (ehFim(r)) {
            break;
        }

        int tela_contem_r = contem(tela, r);
        int r_contem_tela = contem(r, tela);

        if (tela_contem_r && !r_contem_tela) {
            imprime(tela);
            printf(" contem ");
            imprime(r);
            printf(".\n");
        } 
        else if (r_contem_tela && !tela_contem_r) {
            imprime(r);
            printf(" contem ");
            imprime(tela);
            printf(".\n");
        } 
        else {
            printf("Nao posso afirmar!\n");
        }
    }

    return 0;
}