#include <stdio.h>
#include <stdlib.h>

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index) {
    int count = 0;
    int primeiro = -1, ultimo = -1;
    
    for (int i = 0; i < n; i++) {
        int diferenca = (user > cells[i]) ? (user - cells[i]) : (cells[i] - user);
        
        if (diferenca <= distance) {
            count++;
            if (primeiro == -1) {
                primeiro = i;
            }
            ultimo = i;
        }
    }
    
    if (count > 0) {
        *left_index = primeiro;
        *right_index = ultimo;
    }
    
    return count;
}

int main() {
    int n, distance, user;
    scanf("%d %d %d", &n, &distance, &user);
    
    int cells[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &cells[i]);
    }
    
    int left_index, right_index;
    int count = get_range(n, cells, distance, user, &left_index, &right_index);
    
    if (count == 0) {
        printf("USUARIO DESCONECTADO\n");
    } else {
        for (int i = left_index; i <= right_index; i++) {
            if (i > left_index) printf(" ");
            printf("%d", cells[i]);
        }
        printf("\n");
    }
    
    return 0;
}
