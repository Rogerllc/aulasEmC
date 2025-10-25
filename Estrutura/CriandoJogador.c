#include <stdio.h>
#include <string.h>

struct jogador{
    int vidas;
    int pontuacao;
    char nome[50];
};
int main(){
    struct jogador player1 = {3, 1, ""};
    char nome_digitado[50];

    printf("Digite o nome do seu personagem: ");
    scanf("%s", nome_digitado);
    strcpy(player1.nome, nome_digitado);

    printf("Personagem criado! Bem-vindo, %s ! Vidas: %d, Pontuação: %d",player1.nome, player1.vidas, player1.pontuacao);
return 0;
}