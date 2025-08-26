#include <stdio.h>
    int main(){
        int vida_jogador = 100;
        int *ponteiro_vida;

        vida_jogador = 50;
        printf("O jogador sofreu dano!! vida atual do jogador: %d\n", vida_jogador);
        
        ponteiro_vida = &vida_jogador;
        *ponteiro_vida = 100;

        printf("Power-up encontrado. Vida atual do jogador: %d", vida_jogador);
    return 0;
    }