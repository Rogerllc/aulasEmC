#include <stdio.h>
#include <string.h>

int main(){
    char nome_jogador[50];
    char titulo_conquistado[50];

    printf("Digite o nome do heroi:  \n");
    scanf("%[^\n]s", nome_jogador);
    printf("Digite o titulo conquistado: \n");
    scanf(" %[^\n]s", titulo_conquistado);
    
    strcat(titulo_conquistado, " ");
    strcat(titulo_conquistado, nome_jogador );
    printf("O herói agora é conhecido como: %s ", titulo_conquistado);
return 0;
}