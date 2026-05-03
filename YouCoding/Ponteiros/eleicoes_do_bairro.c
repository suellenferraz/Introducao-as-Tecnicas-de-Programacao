#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted) {
    int contagem[11] = {0}; 
    
    for (int i = 0; i < n; i++) {
        contagem[votes[i]]++;
    }
    
    int max1 = 0, chapa1 = 0;
    for (int i = 1; i <= 10; i++) {
        if (contagem[i] > max1) {
            max1 = contagem[i];
            chapa1 = i;
        }
    }
    
    int max2 = 0, chapa2 = 0;
    for (int i = 1; i <= 10; i++) {
        if (i != chapa1 && contagem[i] > max2) {
            max2 = contagem[i];
            chapa2 = i;
        }
    }
    
    *most_voted = chapa1;
    *second_most_voted = chapa2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int votes[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &votes[i]);
    }
    
    int most_voted, second_most_voted;
    compute_votes(n, votes, &most_voted, &second_most_voted);
    
    printf("%d %d\n", most_voted, second_most_voted);
    
    return 0;
}
