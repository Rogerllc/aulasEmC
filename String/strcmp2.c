#include <stdio.h>
#include <string.h>

int main(){
    char palavra_secreta[] = "lux";
    char tentativa_jogador[50];

    printf("Uma voz ancestral ecoa... Diga a palavra e passe: ");
    scanf("%[^\n]s", tentativa_jogador);
    if(strcmp(tentativa_jogador, palavra_secreta ) == 0){//comparar se é a palavra correta
        printf("A porta magica se abre!");
    }else{
        printf("Nada acontece... Parece que a palavra esta incorreta.");
    }
return 0;
}