#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[50];
    int vida;
    int ataque;
}unidade;
int main(){
    int n;
    FILE *squad = fopen("./squad.dat", "wb");

    printf("Informe a quantidade de unidades: ");
    scanf("%d", &n);

    unidade *esquedrao = (unidade *) malloc(n * sizeof(unidade));
    int i;
    printf("Informe os dados dos  inimigos: ");
    for(i = 0; i < n; i++){
        printf("Inimigo %d: ", i + 1);
        scanf("%s %d %d", esquedrao[i].nome, &esquedrao[i].vida, &esquedrao[i].ataque);
    }
    fwrite(esquedrao,sizeof(unidade), n, squad);
    fclose(squad);

    unidade maior_atk = {"", 0, 0};
    for(i = 0; i < n; i++){
        if(esquedrao[i].ataque > maior_atk.ataque){
            maior_atk = esquedrao[i];
            
        }
    }
    printf("O maior ataque:\n Nome: %s\n Vida: %d\n Ataque: %d\n", maior_atk.nome, maior_atk.vida, maior_atk.ataque);
    free(esquedrao);
return 0;
}