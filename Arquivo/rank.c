#include <stdio.h>
typedef struct{
    char nome[50];
    int nivel;
    int highScore;
}playerprofile;
int main(){
    FILE *profile = fopen("./profiles.dat", "rb");
    if(profile == NULL){
        printf("ERRO");
        return 1;
    }
    playerprofile player;
    while(fread(&player, sizeof(playerprofile), 1, profile) == 1){
        if(player.highScore > 10000){
            printf("Jogador %s - Rank é: Mestre do jogo\n",player.nome);
        }else if(player.highScore > 5000){
            printf("Jogador %s - Rank é: Veterano\n", player.nome);
        }else{
            printf("Jogador %s - Rank é: Aspirante\n", player.nome);
        }
    }
    fclose(profile);
}