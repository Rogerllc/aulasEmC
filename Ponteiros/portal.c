#include <stdio.h>
int main(){
    float cordenada_x;
    float *ponteiro_x;

    ponteiro_x = &cordenada_x;

    printf("Informe a cordenada do portal: ");
    scanf("%f", ponteiro_x);

    printf("Posicao do portal no eixo X: [%f]", cordenada_x);
    printf("Endereco do portal para teletransporte: [%p]", ponteiro_x);
return 0;
}