#include <stdio.h>
#include <string.h>

int main(){
    char nome_jogador[50];

    printf("Digite seu nickname: ");
    scanf("%[^\n]s", nome_jogador);
    if(strlen(nome_jogador) <= 15){//strlen esta contando a quantidade de caracteres
        printf("\nNome valido! Bem-vindo ao jogo, [%s]", nome_jogador);
    }else{
        printf("Nome muito longo! Por favor , escolha um nome com ate 15 caracteres.");
    }
return 0;
}