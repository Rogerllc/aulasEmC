#include <stdio.h>
int main(){
    int sala_1[] = {10, 20, 5};
    int sala_2[] = {50, 100};
    int sala_3[] = {5, 5, 5, 10};
    int *ponteiro_salas[3];
    ponteiro_salas[0] = sala_1;
    ponteiro_salas[1] = sala_2;
    ponteiro_salas[2] = sala_3;

    int i;
    int tamanho_salas;
    tamanho_salas = sizeof(sala_1) / sizeof(sala_1[0]);
    printf("Moedas na sala 1: ");
    for(i = 0; i < tamanho_salas; i++){
        printf("%d ", ponteiro_salas[0][i]);
    }
    printf("\n");
    tamanho_salas = sizeof(sala_2) / sizeof(sala_2[1]);
    printf("Moedas na sala 2: ");
    for(i = 0; i < tamanho_salas; i++){
        printf("%d ", ponteiro_salas[1][i]);

    }
    printf("\n");
    tamanho_salas = sizeof(sala_3) / sizeof(sala_3[2]);
    printf("Moedas na sala 3: ");
    for(i = 0; i < tamanho_salas; i++){
        printf("%d ", ponteiro_salas[2][i]);
    }
    
return 0;
}