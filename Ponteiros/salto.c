#include <stdio.h>
int main(){
    int plataforma[] = {10, 20, 5, 15, 30};
    int *ponteiro_plataforma;
    int altura_total = 0;

    for(ponteiro_plataforma = plataforma; ponteiro_plataforma < plataforma + 5; ponteiro_plataforma++){
        altura_total += *ponteiro_plataforma;
    }

    printf("Altura total do salto: %d metros!", altura_total);
return 0;
}