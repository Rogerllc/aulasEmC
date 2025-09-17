#include <stdio.h>
int menor(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int tamanho;
    int n, i, j;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);
    for(n = 1; n < tamanho; n++){
        for(i = 1; i < n; i++){
            for(j = 1; j < n; j++){
                int topo = i;
                int esquerda = j;
                int baixo = n - 0 - i;
                int direita = n - 0 - j;
                int distancia = menor(menor(topo, baixo), menor(esquerda, direita));

                printf("%-3d", distancia);
            }
            printf("\n");
        }
        printf("\n");
    }
return 0;
}