#include <stdio.h>
enum estadopersonagem{
    PARADO,
    CORRENDO,
    PULANDO,
};
int main(){
    enum estadopersonagem estado_atual;
    int estado;

    printf("Informe um numero de 0 a 2 para definir o estado do personagem: ");
    scanf("%d", &estado);

    estado_atual = estado;

    if(estado_atual == PARADO){
        printf("O personagem esta parado");
    }else if(estado_atual == CORRENDO){
        printf("O personagem esta correndo");
    }else if(estado_atual == PULANDO){
        printf("O personagem esta pulando");
    }else{
        printf("Estado ivalido!");
    }
return 0;
}