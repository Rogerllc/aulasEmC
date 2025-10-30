#include <stdio.h>
typedef struct {
    char nome[50];
    float HP;
    float ATK;
}inimigos;
int main(){
    inimigos inimigo[3];
    FILE *file = fopen("./inimigos.txt", "r");

    int i;
    float nivel_ameaca = 0;
    for(i = 0; i < 3; i++){
        fscanf(file, "%s %f %f", inimigo[i].nome, &inimigo[i].HP, &inimigo[i].ATK);
        nivel_ameaca = inimigo[i].HP + inimigo[i].ATK;

        if(nivel_ameaca >=200){
            printf(" \nNivel do inimigo %s é ELITE.\n total de pode: %f", inimigo[i].nome, nivel_ameaca);
        }
    }
    fclose(file);
return 0;
}