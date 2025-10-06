#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ponteiro_altura_salto_duplo = NULL;

    printf("Jogador ainda nao possui o salto duplo\n");
    ponteiro_altura_salto_duplo = (float *) malloc(sizeof(float));
 
    if(ponteiro_altura_salto_duplo != NULL){
        *ponteiro_altura_salto_duplo = 15.5;
        printf("Pena dourada coletada! Altura do salto duplo: %f ",*ponteiro_altura_salto_duplo);
        free(ponteiro_altura_salto_duplo);
    }else{
        printf("ERRO");
        return 0;
    }
    
return 0;
}