#include <stdio.h>
struct itemcoletavel{
    int valo_ponto;
    float peso;
};
int main(){
    struct itemcoletavel moeda_bronze = {10, 0.5};
    struct itemcoletavel moeda_prata = {50, 0.7};
    struct itemcoletavel moeda_ouro = {100, 1.0};

    int pontuacao_jogador = 0;

    pontuacao_jogador += moeda_ouro.valo_ponto;
    printf("Moeda de ouro coletada! Pontuação atual: %d", pontuacao_jogador);
return 0;
}