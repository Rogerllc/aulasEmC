#include <stdio.h>
int main(){
    float a[4][2];
    float b[4][2];
    int i, j;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um valor: ");
            scanf("%f",&a[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            b[3 - i][1 - j] = a[i][j];
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("A: | %.2f | ", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("B: | %.2f | ", b[i][j]);
        }
        printf("\n");
    }
return 0;
}