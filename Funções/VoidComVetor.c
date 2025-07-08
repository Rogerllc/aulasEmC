#include <stdio.h>
void numeros(){ //void
    int num[6];
    for(int i = 1; i <= 6; i++){
   printf("\nNumeros digitados: %d\n", num[6]);
    }
}

int main(){
    int num[6];
    for(int i = 0; i < 6; i++){
        printf("Informe um numero: ");
        scanf("%d", &num[i]);
}
numeros();
return 0;
}