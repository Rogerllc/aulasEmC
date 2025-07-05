#include <stdio.h>
int main(){
    int vet[10];
    int maior;
    int i;
    for(i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d",&vet[i]);

        if(i==0 || vet[i] > maior){
            maior = vet[i];
        }

    }
    printf("O maio valor inserido: %d", maior);
    return 0;
}