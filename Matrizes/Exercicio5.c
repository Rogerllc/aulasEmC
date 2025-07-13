#include <stdio.h>
int matriz(int a[3][3]){
    int maior [3];
    int i, j;
    for(i = 0; i < 3; i ++){
        maior[i] = a[i][0];
        for(j = 0; j < 3; j++){
            if(a[i][j] > maior [i]){
                maior[i] = a[i][j];
            }
        }
    }
    for(i = 0; i < 3; i ++){
        printf("O maior valor na linha %d e %d \n", i + 1, maior[i]);
    }
return 0;
}
int main(){
    int valor[3][3];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe um valor: ");
            scanf("%d", &valor[i][j]);
        }
    }
    matriz(valor);
return 0;
}