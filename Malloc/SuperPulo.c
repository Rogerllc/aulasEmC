#include <stdio.h>
#include <stdlib.h>

int main(){
    void * ponteiro_diracao = malloc(sizeof(int));
    *((int *) ponteiro_diracao) = 10; 

    printf("Power-up 'Super Salto' ativado! Duracao: %d segundos\n",*((int *)ponteiro_diracao));

    *((int *)ponteiro_diracao) -= 3;
    printf(" 3 segundo se passaram... Duracao restante: %d segundos",*((int *)ponteiro_diracao));

    free(ponteiro_diracao);
return 0;
}