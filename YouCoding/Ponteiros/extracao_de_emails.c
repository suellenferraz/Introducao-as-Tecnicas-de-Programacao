#include <stdio.h>
#include <string.h>

void encontrar_indices(char *email, int *indice_arroba, int *indice_ponto) {
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            *indice_arroba = i;
        }
    }
    
    for (int i = *indice_arroba + 1; email[i] != '\0'; i++) {
        if (email[i] == '.') {
            *indice_ponto = i;
            break;
        }
    }
}

int main() {
    char email[51];
    
    while (1) {
        scanf("%s", email);
        
        if (strcmp(email, "FIM") == 0) {
            break;
        }
        
        int indice_arroba, indice_ponto;
        encontrar_indices(email, &indice_arroba, &indice_ponto);
        
        for (int i = indice_arroba + 1; i < indice_ponto; i++) {
            printf("%c", email[i]);
        }
        printf("\n");
    }
    
    return 0;
}
