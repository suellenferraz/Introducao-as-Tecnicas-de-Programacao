#include <stdio.h>

int main() {
    int N, vencedora;
    double n1, n2, n3, media, maior_media;

    scanf("%d", &N);

    maior_media = -1.0;
    vencedora = 0;

    for (int i = 1; i <= N; i++) {
        scanf("%lf", &n1);
        scanf("%lf", &n2);
        scanf("%lf", &n3);

        media = (n1 + n2 + n3) / 3.0;

        if (media >= maior_media) {
            maior_media = media;
            vencedora = i;
        }
    }

    printf("Vencedor: %d\n", vencedora);
    printf("Nota: %.2lf\n", maior_media);

    return 0;
}