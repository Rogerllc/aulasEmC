#include <stdio.h>
#define linha_a 3
#define coluna_a 2
#define linha_b 2
#define coluna_b 2

int main(){
    int matriz_a[linha_a][coluna_a];
    int matriz_b[linha_b][coluna_b];
    int matriz[linha_a][coluna_b];
    int i, j;

    printf("Digite os elementos da matriz A: ");
    for(i = 0; i < linha_a; i++){
        for(j = 0; j < coluna_a; j++){
            scanf("%d", &matriz_a[i][j]);
        }
    }
    printf("Digite os elemtentos da matriz B: ");
    for(i = 0; i < linha_b; i++){
        for(j = 0; j < coluna_b; j++){
            scanf("%d", &matriz_b[i][j]);
        }
    }
    for(i = 0; i < linha_a; i++){
        for(j = 0; j < coluna_b; j++){
            matriz[i][j] = 0;
            int k;
            for(k = 0; k < coluna_a; k++){
                matriz[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
    printf("Matriz:\n ");
    for(i = 0; i < linha_a; i++){
        for(j = 0; j < coluna_b; j++){
            printf("%4d ", matriz[i][j]);
            
        }
        printf("\n");
    }
return 0;
}