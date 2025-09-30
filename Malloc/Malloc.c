#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vida_inimigo = (int *) malloc(8 *sizeof(int));
    if(vida_inimigo == NULL){
        printf("ERRO!!!");
        return 0;
    }

    *vida_inimigo = 80;
    printf("Um novo inimigo apareceu com %d de vida!", *(vida_inimigo));

    *vida_inimigo = 80 - 35;
    printf("\nO jogador atacou! Vida restante do inimigo: %d", *(vida_inimigo));

    free(vida_inimigo);
return 0;
}