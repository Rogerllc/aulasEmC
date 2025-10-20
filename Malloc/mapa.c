#include <stdio.h>
#include <stdlib.h>
int main(){
    int linhas, colunas;
    printf("Informe as linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    int **mapa = (int **) malloc(linhas * sizeof(int *));
    int i, j;
    for(i = 0; i < linhas; i++){
        mapa[i] = (int *) malloc(colunas * sizeof(int));
    }
    printf("Digite os valores do mapa (0, 1 ou 2):\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d ",&mapa[i][j]);
        }
    }
    int tijolo = 0;
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(mapa[i][j] == 1){
                tijolo++;
            }
        }
    }
    printf("O mapa possui %d blocos de tijolo", tijolo);
    for(i = 0; i < linhas; i++){
        free(mapa[i]);
    }
    free(mapa);
}