#include <stdio.h>
typedef struct{
    char nome[50];
    int vida;
    int ataque;
}inimigo;
int main(){
    inimigo wave;
    FILE *wave_data = fopen("./wave_data.txt", "r");
    if(wave_data == NULL){
        printf("ERRO, ARQUIVO NAO ENCONTRADO");
        return 1;
    }
    inimigo inimigo_mais_forte = {"", 0, 0};
    while (fscanf(wave_data, "%s %d %d",wave.nome, &wave.vida, &wave.ataque ) != EOF){
        if(wave.ataque > inimigo_mais_forte.ataque){
            inimigo_mais_forte = wave;
        }
    }
    printf("Maior Ameaça: %s\n Vida: %d\n Ataque: %d\n",inimigo_mais_forte.nome, inimigo_mais_forte.vida, inimigo_mais_forte.ataque);
    fclose(wave_data);
return 0;
}