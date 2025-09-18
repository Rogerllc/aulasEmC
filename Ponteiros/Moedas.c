#include <stdio.h>
int main(){
    int pontuacao = 0;
    int *ponteiro_pontuacao;

    ponteiro_pontuacao = &pontuacao;
    
    printf("Pontuacao inicial: %d\n", pontuacao);

    int i;
    for(i = 0; i < 3; i++){
        *ponteiro_pontuacao += 10;
        printf("O jogador coletou 10 moedas. Moedas atuais: %d\n", pontuacao);
    }
    printf("Pontuacao final: %d", pontuacao);
return 0;
}