#include <stdio.h>

int testa_divisor(int numero, int divisor){
    return (numero % divisor == 0);
}

int soma_divisores(int value){
    int soma = 0;

    for(int i = 1; i < value; i++){
        if(testa_divisor(value, i)){
            soma += i;
        }
    }

    return soma;
}

int testa_amigos(int a, int b){
    if(a == b) return 0;

    return (soma_divisores(a) == b && soma_divisores(b) == a);
}

int main(){
    int A, B, C, D;
    int encontrou = 0;

    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    for(int i = A; i <= B; i++){
        for(int j = C; j <= D; j++){

            if(testa_amigos(i, j)){
                printf("O %d possui um amigo!\n", i);
                encontrou = 1;
                break; // já achou um amigo para i
            }

        }
    }

    if(!encontrou){
        printf("Os intervalos nao apresentam amigos!\n");
    }

    return 0;
}