#include <stdio.h>
#include <stdlib.h>
#define linhas 5
#define colunas 10

int main(){
    int *level_map = (int *) malloc(linhas * colunas *sizeof(int));
    if(level_map == NULL){
        printf("ERRO");
        return 0;
    }

    int i, j;
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(i == linhas - 1){
                *(level_map + i * colunas + j) = 1;
            }else{
                *(level_map + i * colunas + j) = 0;
            }
            printf("%d ", *(level_map + i * colunas + j));
        }
        printf("\n");
    }


    free(level_map);
return 0;
}