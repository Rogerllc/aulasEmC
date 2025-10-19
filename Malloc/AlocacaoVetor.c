#include <stdio.h>
#include <stdlib.h>
int main(){
    int n_inimigos;
    int *ponteiro_onda;
    

    printf("Informe a quantidade de inimigos na onda: ");
    scanf("%d", &n_inimigos);

    ponteiro_onda = (int *)malloc(n_inimigos * sizeof(int));

    int i;
    printf("Informe o ID de cada inimigo: ");
    for(i = 0; i < n_inimigos; i++){
        scanf("%d", &ponteiro_onda[i]);
    }
    printf("Onda de inimigos criada com sucesso! IDs: ");
    for(i = 0; i < n_inimigos; i++){
        printf("%d ", ponteiro_onda[i]);
    }
    free(ponteiro_onda);
return 0;
}