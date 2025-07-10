#include <stdio.h>
int main(){
    int mt[3][3];
    int i, j;
    for( i = 0; i < 3; i++){
        for(j = 0; j < 3; j ++){
            printf("Informe um valor: ");
            scanf("%d",&mt[i][j]);
        }
    }
    for(i = 2; i >= 0; i--){
        for(j = 2; j >= 0; j--){
            printf("%d \n",mt[i][j]);
        }
    }
return 0;
}