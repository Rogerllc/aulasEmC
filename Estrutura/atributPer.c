#include <stdio.h>
#include <string.h>

struct atributos{
    int vida;
    int pontuacao;
};
struct personagem{
    char nome[50];
    struct atributos stats;
};
int main(){
    struct personagem jogador;
    printf("Digite o nome do jogador: ");
    scanf("%s", jogador.nome);
    
    jogador.stats.vida = 100;
    jogador.stats.pontuacao = 0;

    printf("Status Inicial -> Nome: %s | Vida: %d | Pontuacao: %d\n", jogador.nome, jogador.stats.vida, jogador.stats.pontuacao);

    jogador.stats.pontuacao = 10;
    jogador.stats.vida -= 25;

    printf("Status Final -> Nome: %s | Vida: %d | Pontuacao: %d", jogador.nome, jogador.stats.vida, jogador.stats.pontuacao);
return 0;
}