#include <stdio.h>
struct jogador{
    float pos_x;
    int pontuacao;
    int tem_pulo_duplo;
};
int main(){
    struct jogador heroi = {50.0, 0, 0};
    
    printf("Inicio da fase! \nPosicao X: %.2f\n Pontos: %d\n Pulo Duplo: %d\n", heroi.pos_x, heroi.pontuacao, heroi.tem_pulo_duplo);

    heroi.pontuacao = 10;
    heroi.tem_pulo_duplo = 1;

    printf("Itens coletados!\n Posicao X: %f\n, Pontos: %d\n, Pulo Duplo: %d ",heroi.pos_x, heroi.pontuacao, heroi.tem_pulo_duplo);
return 0;
}