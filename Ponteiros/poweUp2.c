#include <stdio.h>
void aplicar_powerup_pontuacao_dupla(int *powerUp){
    *powerUp = 2 * *powerUp;
    printf("Pontuacao apos o power-up: %d\n", *powerUp);
}
int main(){
    int pontuacao_jogador = 1500;
    int *poweUp;

    printf("Pontuacao antes do power-up: %d\n", pontuacao_jogador);

    poweUp = &pontuacao_jogador;
    // função void
    aplicar_powerup_pontuacao_dupla(poweUp);
return 0;
}