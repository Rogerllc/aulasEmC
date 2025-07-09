#include <stdio.h>
void numeros(int num[]){ //void
    for(int i = 1; i <= 6; i++){
   printf("\nNumeros digitados: %d\n", num[i]);
    }
}

int main(){
    int num[6];
    for(int i = 0; i < 6; i++){
        printf("Informe um numero: ");
        scanf("%d", &num[i]);
}
numeros(num);
return 0;
}