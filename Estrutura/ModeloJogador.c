#include <stdio.h>

struct inimigo{
    int vida;
    int ataque;
    float velocidade;
};
int main(){
    struct inimigo cogumelo_zumbi = {20, 5, 0.8};
    struct inimigo cavaleiro_esqueleto = {80, 15, 1.2};
    
    printf("---Atributos do inimigo: Cogumelo Zumbi---");
    printf("\nVida: %d\n", cogumelo_zumbi.vida);
    printf("Ataque: %d\n", cogumelo_zumbi.ataque);
    printf("Velocidade: %.1f\n", cogumelo_zumbi.velocidade);
    printf("---Atributos do inimigo: Cavaleiro esqueleto---");
    printf("\nVida: %d\n", cavaleiro_esqueleto.vida);
    printf("Ataque: %d\n", cavaleiro_esqueleto.ataque);
    printf("Velocidade: %.1f\n", cavaleiro_esqueleto.velocidade);
return 0;
}