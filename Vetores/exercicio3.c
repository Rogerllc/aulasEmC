#include <stdio.h>

int main() {
    int vet[8];
    int i;

    
    for (i = 0; i < 8; i++) {
        printf("Informe um valor: ");
        scanf("%d", &vet[i]);
    } 

    printf("\n--- Valores em ordem decrescente ---\n");

    
    for (i = 7; i >= 0; i--) {
        printf("Valor: %d\n", vet[i]);
    }

    return 0;
}