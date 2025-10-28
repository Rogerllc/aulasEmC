#include <stdio.h>
struct personagem{
    int posX;
    int posY;
    int moeda;
};
struct personagem atualizarpersonagem(struct personagem p){
    p.posX = 10;
    p.posY = 5;
    p.moeda += 1;

return p;
}
int main(){
    struct personagem jogador = {0, 0, 0};
    printf("Posicao inicial: (%d, %d) - Moedas: %d\n", jogador.posX, jogador.posY, jogador.moeda);

    jogador = atualizarpersonagem(jogador);

    printf("Posicao atualizada: (%d, %d) - Moedas: %d", jogador.posX, jogador.posY, jogador.moeda);
}
