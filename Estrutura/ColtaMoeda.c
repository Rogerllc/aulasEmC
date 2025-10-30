#include <stdio.h>
#include <stdlib.h>
struct moeda{
    int posicao_x;
    int posicao_y;
    int valor;
};
int main(){
    int vlr;
    printf("Quantas moedas seram cadastradas? ");
    scanf("%d", &vlr);

    struct moeda *pmoeda = (struct moeda *) malloc(vlr* sizeof(struct moeda));
    int i;
    printf("Informe a posicao X e Y, e o valor de cada moeda coletada: ");
    for(i = 0; i < vlr; i++){
        scanf("%d %d %d", &pmoeda[i].posicao_x, &pmoeda[i].posicao_y, &pmoeda[i].valor);

    }
    int valor_pontos = 0;
    for(i = 0; i < vlr; i++){
        valor_pontos += pmoeda[i].valor;
    }
    printf("Pontuacao maxima do nivel: %d",valor_pontos);
    free(pmoeda);
return 0;
}