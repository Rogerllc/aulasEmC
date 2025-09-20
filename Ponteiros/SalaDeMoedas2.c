#include <stdio.h>
int main(){
    int sala_1[] = {10, 20, 5};
    int sala_2[] = {50, 100};
    int sala_3[] = {5, 5, 5, 10};
    int *ponteiro_sala[3];
    ponteiro_sala[0] = sala_1;
    ponteiro_sala[1] = sala_2;
    ponteiro_sala[2] = sala_3;

    int tamanhos[] = {3, 2, 4};
    int i, j;
    for(i = 0; i < 3; i++){
        printf("Moedas na sala %d: ", i + 1);
        for(j = 0; j < tamanhos[i]; j++){
            printf("%d ", ponteiro_sala[i][j]);
        }
        printf("\n");
    }
return 0;
}