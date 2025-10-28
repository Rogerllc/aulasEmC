#include <stdio.h>
typedef struct{
    int pontos;
    float pos_x;
    float pos_y;
}coletavel;
int main(){
    coletavel gema_rara;
    printf("Informe os pontos e as cordenadas X e Y: ");
    scanf("%d %f %f", &gema_rara.pontos, &gema_rara.pos_x, &gema_rara.pos_y);

    printf("Coletável criado! Valor: [%d] pontos. Posição: (X=[%.2f], Y=[%.2f])", gema_rara.pontos, gema_rara.pos_x, gema_rara.pos_y);
return 0;
}